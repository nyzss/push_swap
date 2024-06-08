/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:39:45 by okoca             #+#    #+#             */
/*   Updated: 2024/06/08 11:24:11 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stuff(t_node **stack_a, t_node **stack_b)
{
	ft_printf("stack: a");
	if (stack_a)
		ps_print_lst(*stack_a);
	ft_printf("stack: b");
	if (stack_b)
	ps_print_lst(*stack_b);
}

void	ps_sort_algo(t_node **stack_a, t_node **stack_b)
{
	int		max_index;
	int		max_bits;
	int		i;
	int		size;
	int		j;

	j = 0;
	i = 0;
	max_bits = 0;
	size = ps_get_size(*stack_a);
	max_index = size - 1;
	while (max_index >> max_bits != 0)
		++max_bits;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->index >> i)&1) == 1)
			{
				ps_rotate_up(stack_a);
				printf("ra\n");
			}
			else
			{
				ps_push(stack_b, stack_a);
				printf("pb\n");
			}
			++j;
		}
		while (ps_get_size(*stack_b) != 0)
		{
			ps_push(stack_a, stack_b);
			printf("pa\n");
		}
		++i;
	}
}

void	ps_other_sort_algo(t_node **stack_a, t_node **stack_b)
{
	int		size;
	int		i;
	int		j;

	i = 0;
	j = 0;
	size = ps_get_size(*stack_a);

	while (!ps_check_sorted(*stack_a))
	{
		while (j < size)
		{
			if (((*stack_a)->index >> i)&1)
			{
				ps_rotate_up(stack_a);
				printf("ra\n");
			}
			else
			{
				ps_push(stack_b, stack_a);
				printf("pb\n");
			}
			j++;
		}
		while (ps_get_size(*stack_b) != 0)
			ps_push(stack_a, stack_b);
		i++;
	}
}

void	ps_sort_tab(int ac, int **tab)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < ac)
	{
		j = i;
		while (j < ac)
		{
			if (tab[0][i] > tab[0][j])
			{
				tmp = tab[0][i];
				tab[0][i] = tab[0][j];
				tab[0][j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int		*ps_create_stack(int ac, char **av)
{
	int		i;
	int		j;
	int		*tab;
	int		*another_tab;

	i = 0;
	tab = (int *)malloc(sizeof(int) * ac);
	another_tab = (int *)malloc(sizeof(int) * ac);
	while (i < ac)
	{
		tab[i] = ft_atoi(av[i]);
		i++;
	}
	ps_sort_tab(ac, &tab);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (j < ac)
		{
			if (ft_atoi(av[i]) == tab[j])
				break ;
			j++;
		}
		another_tab[i] = j;
		i++;
	}
	free(tab);
	return (another_tab);
}

int		main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;
	t_node	*tmp;
	int		*tab;
	int		i;

	i = 0;
	tmp = NULL;
	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
	{
		ft_printf("no args passed\n");
		return (0);
	}
	tab = ps_create_stack(ac - 1, av + 1);
	while (i < ac - 1)
	{
		tmp = ps_create_node(ft_atoi(av[i + 1]), tab[i]);
		if (!tmp)
			return (1);
		ps_add_back(&stack_a, tmp);
		i++;
	}
	// ps_other_sort_algo(&stack_a, &stack_b);
	ps_sort_algo(&stack_a, &stack_b);
	// print_stuff(&stack_a, &stack_b);
	ps_clear(&stack_a);
	ps_clear(&stack_b);
}

int	ps_get_size(t_node *stack)
{
	int	i;

	i = 0;
	while (stack != NULL)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int	ps_check_sorted(t_node *stack)
{
	while (stack != NULL)
	{
		if (stack->content > stack->next->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	ps_reserve_check_sorted(t_node *stack)
{
	while (stack != NULL)
	{
		if (stack->content < stack->next->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}

/*
GET MEDIAN

calculate how many numbers that are bigger than median (bigger cause you just push without having
to rotate to place it accordingly)
rotate a till you get
*/

// have an index for each node, rotate and push from 'b' to 'a' until you have the list you want?

int		ps_get_median(t_node *stack)
{
	int	median;
	int	*tab;
	int	i;
	int	j;
	int	size;
	int	tmp;

	i = 0;
	median = 0;
	tmp = 0;
	size = ps_get_size(stack);
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (0);
	while (stack != NULL)
	{
		tab[i] = stack->content;
		stack = stack->next;
		i++;
	}
	i = 0;
	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	printf("current median: %d\n", tab[size / 2]);
	median = tab[size / 2];
	free(tab);
	return (median);
}

int		ps_check_median(t_node *stack, int median)
{
	while (stack != NULL)
	{
		if (stack->content < median)
			return (1);
		stack = stack->next;
	}
	return (0);
}

void	ps_sort_segment(t_node **stack_a)
{
	while (!ps_check_sorted(*stack_a))
	{
		if ((*stack_a)->content < (*stack_a)->next->content && (*stack_a)->content > (*stack_a)->next->next->content)
			ps_rotate_down(stack_a);
		else if ((*stack_a)->content > (*stack_a)->next->content && (*stack_a)->content > (*stack_a)->next->next->content)
			ps_rotate_up(stack_a);
	}
}



//tu push temp, du coup temp change de place et fini dans la stack_b,
//le mieux ca serait d'avoir un size, et iter pendant la size?