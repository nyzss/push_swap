/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:18:27 by okoca             #+#    #+#             */
/*   Updated: 2024/06/08 21:37:51 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_sort(t_node **stack_a, t_node **stack_b)
{
	int	size;

	size = ps_get_size(*stack_a);
	if (size == 1)
		return ;
	if (size <= 3)
		ps_sort_small(stack_a);
	else if (size == 4)
		ps_sort_of_four(stack_a, stack_b);
	else if (size == 5)
		ps_sort_of_five(stack_a, stack_b);
	else
		ps_sort_big(stack_a, stack_b);
}

void	ps_sort_small(t_node **stack_a)
{
	int	size;

	size = ps_get_size(*stack_a);
	if (size == 2)
	{
		if ((*stack_a)->index > (*stack_a)->next->index)
			ps_swap(*stack_a, STACK_A);
	}
	else
	{
		if ((*stack_a)->next->next->index != 2)
		{
			if ((*stack_a)->index == 2)
				ps_rotate_up(stack_a, STACK_A);
			else
				ps_rotate_down(stack_a, STACK_A);
		}
		if ((*stack_a)->index > (*stack_a)->next->index)
			ps_swap(*stack_a, STACK_A);
	}
}

void	ps_sort_of_four(t_node **stack_a, t_node **stack_b)
{
	while ((*stack_a)->index != 3)
		ps_rotate_up(stack_a, STACK_A);
	ps_push(stack_b, stack_a, STACK_B);
	ps_sort_small(stack_a);
	ps_push(stack_a, stack_b, STACK_A);
	ps_rotate_up(stack_a, STACK_A);
}

void	ps_sort_of_five(t_node **stack_a, t_node **stack_b)
{
	if (ps_last(*stack_a)->index == 3)
	{
		ps_rotate_down(stack_a, STACK_A);
		ps_push(stack_b, stack_a, STACK_B);
	}
	else if ((*stack_a)->next->next->next->index == 3)
	{
		ps_rotate_down(stack_a, STACK_A);
		ps_rotate_down(stack_a, STACK_A);
		ps_push(stack_b, stack_a, STACK_B);
	}
	else
	{
		while ((*stack_a)->index != 3)
			ps_rotate_up(stack_a, STACK_A);
		ps_push(stack_b, stack_a, STACK_B);
	}
	while ((*stack_a)->index != 4)
		ps_rotate_up(stack_a, STACK_A);
	ps_push(stack_b, stack_a, STACK_B);
	ps_sort_small(stack_a);
	ps_push(stack_a, stack_b, STACK_A);
	ps_push(stack_a, stack_b, STACK_A);
	ps_rotate_up(stack_a, STACK_A);
	ps_rotate_up(stack_a, STACK_A);
}

void	ps_sort_big(t_node **stack_a, t_node **stack_b)
{
	int	max_bits;
	int	i;
	int	size;
	int	j;

	j = 0;
	i = 0;
	size = ps_get_size(*stack_a);
	max_bits = ps_get_maxbits(size);
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ps_rotate_up(stack_a, STACK_A);
			else
				ps_push(stack_b, stack_a, STACK_B);
			++j;
		}
		while (ps_get_size(*stack_b) != 0)
			ps_push(stack_a, stack_b, STACK_A);
		++i;
	}
}
