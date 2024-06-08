/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smaller_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:18:27 by okoca             #+#    #+#             */
/*   Updated: 2024/06/08 19:41:29 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_sort_tree(t_node **stack_a)
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
