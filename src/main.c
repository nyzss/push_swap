/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:39:45 by okoca             #+#    #+#             */
/*   Updated: 2024/06/07 16:33:37 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stuff(t_node **stack_a, t_node **stack_b)
{
	ft_printf("stack: a");
	ps_print_lst(*stack_a);
	ft_printf("stack: b");
	ps_print_lst(*stack_b);
}

void	ps_sort_algo(t_node **stack_a)
{
	t_node	*stack_b;

	stack_b = NULL;
	// int
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
			if (*tab[i] > *tab[j])
			{
				tmp = *tab[i];
				*tab[i] = *tab[j];
				*tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

t_node	**ps_create_stack(int ac, char **av)
{
	int		i;
	int		j;
	int		*tab;
	t_node	**stack;

	i = 0;
	stack = NULL;
	tab = (int *)malloc(sizeof(int) * ac);
	while (i < ac)
	{
		tab[i] = ft_atoi(av[i]);
		i++;
	}
	i = 0;
	ps_sort_tab(ac, &tab);
	while (i < ac)
	{
		j = 0;
		while (j < ac)
		{
			if (ft_atoi(av[i]) == tab[j])
				break ;
			j++;
		}
		ps_add_back(stack, ps_create_node(ft_atoi(av[i]), j));
		i++;
	}
	return (stack);
}

int		main(int ac, char **av)
{
	t_node	**stack_a;
	t_node	*tmp;
	int		i;

	i = 0;
	stack_a = NULL;
	if (ac == 1)
	{
		ft_printf("no args passed\n");
		return (0);
	}
	stack_a = ps_create_stack(ac - 1, av + 1);
	ps_sort_algo(stack_a);
	ps_clear(stack_a);
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