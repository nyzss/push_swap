/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   both.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 11:32:33 by okoca             #+#    #+#             */
/*   Updated: 2024/06/08 12:00:15 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_rotate_down_both(t_node **first_stack, t_node **second_stack, int id)
{
	ps_rotate_down(first_stack, id);
	ps_rotate_down(second_stack, id);
}

void	ps_rotate_up_both(t_node **first_stack, t_node **second_stack, int id)
{
	ps_rotate_up(first_stack, id);
	ps_rotate_up(second_stack, id);
}

void	ps_swap_both(t_node *stack_a, t_node *stack_b, int id)
{
	ps_swap(stack_a, id);
	ps_swap(stack_b, id);
}
