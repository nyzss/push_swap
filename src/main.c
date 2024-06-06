/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:39:45 by okoca             #+#    #+#             */
/*   Updated: 2024/06/06 14:53:58 by okoca            ###   ########.fr       */
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

int		main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*tmp;
	int		i;

	i = 0;
	stack_a = NULL;
	if (ac == 1)
	{
		ft_printf("no args passed\n");
		return (0);
	}
	while (i < ac - 1)
	{
		tmp = ps_create_node(ft_atoi(av[i + 1]));
		if (!tmp)
			return (1);
		ps_add_back(&stack_a, tmp);
		i++;
	}
	other_sort(&stack_a);
	// print_stuff(&stack_a);
	ps_clear(&stack_a);
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
	t_node	*tmp;

	while (stack != NULL)
	{
		tmp = stack;
		while (tmp != NULL)
		{
			if (tmp->content < stack->content)
				return (0);
			tmp = tmp->next;
		}
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
		if (stack->content <= median)
			return (1);
		stack = stack->next;
	}
	return (0);
}

void	other_sort(t_node **stack_a)
{
	t_node	*stack_b;
	int		size;
	int		median;

	stack_b = NULL;
	median = ps_get_median(*stack_a);
	size = ps_get_size(*stack_a);

	//ignore
	printf("\n\n------------#####BEFORE------------- \n\n");
	printf("size: %d\n", size);
	printf("median: %d\n", median);
	print_stuff(stack_a, &stack_b);
	//ignore

	while (size > 3)
	{
		if ((*stack_a)->content <= median)
			ps_push(&stack_b, stack_a);
		else
		{
			if ((*stack_a)->next->content <= median)
				ps_rotate_up(stack_a);
			else if (ps_last(*stack_a)->content <= median)
				ps_rotate_down(stack_a);
			else
				ps_rotate_down(stack_a);
		}
		size = ps_get_size(*stack_a);
		if (!ps_check_median(*stack_a, median))
			median = ps_get_median(*stack_a);
	}

	//ignore
	printf("\n\n-----------###AFTER--------------- \n\n");
	printf("size: %d\n", size);
	printf("median: %d\n", median);
	print_stuff(stack_a, &stack_b);
	//ignore
}

void	ps_sort_algo(t_node **stack_a)
{
	t_node	**tmp;
	t_node	*stack_b;
	int		size;
	int		initial_size_b;
	int		minimum;
	int		maximum;

	minimum = 0;
	maximum = 0;
	stack_b = NULL;
	tmp = stack_a;
	initial_size_b = 0;
	size = ps_get_size(*stack_a);

	//ignore
	printf("\n\nbefore: \n\n");
	print_stuff(stack_a, &stack_b);
	printf("size: %d\n", size);
	//ignore

	ps_push(&stack_b, stack_a);
	ps_push(&stack_b, stack_a);
	if (stack_b->content > stack_b->next->content)
	{
		maximum = stack_b->content;
		minimum = stack_b->next->content;
	}
	else
	{
		maximum = stack_b->next->content;
		minimum = stack_b->content;
		ps_rotate_up(&stack_b);
	}

	while (size > 3)
	{
		if ((*stack_a)->content < minimum)
		{
			minimum = (*stack_a)->content;
			ps_push(&stack_b, stack_a);
			ps_rotate_up(&stack_b);
		}
		else if ((*stack_a)->content > maximum)
		{
			maximum = (*stack_a)->content;
			ps_push(&stack_b, stack_a);
		}
		if ((*stack_a)->next->content > maximum)
			ps_rotate_up(stack_a);
		else if (ps_last(*stack_a)->content > maximum)
			ps_rotate_down(stack_a);
		else if ((*stack_a)->next->content < minimum)
			ps_rotate_up(stack_a);
		else if (ps_last(*stack_a)->content < minimum)
			ps_rotate_down(stack_a);
		else
			ps_rotate_up(stack_a);
		size = ps_get_size(*stack_a);
		// size--;
	}
	printf("\nmaximum: %d\n", maximum);
	printf("\nminimum: %d\n", minimum);
	printf("\n\nafter: \n\n");
	printf("size: %d\n", size);
	print_stuff(stack_a, &stack_b);
}
//tu push temp, du coup temp change de place et fini dans la stack_b,
//le mieux ca serait d'avoir un size, et iter pendant la size?