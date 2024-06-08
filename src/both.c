/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   both.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 11:32:33 by okoca             #+#    #+#             */
/*   Updated: 2024/06/08 12:09:39 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_rotate_down_both(t_node **f_stack, t_node **s_stack, int id)
{
	ps_rotate_down(f_stack, id);
	ps_rotate_down(s_stack, id);
}

void	ps_rotate_up_both(t_node **f_stack, t_node **s_stack, int id)
{
	ps_rotate_up(f_stack, id);
	ps_rotate_up(s_stack, id);
}

void	ps_swap_both(t_node *stack_a, t_node *stack_b, int id)
{
	ps_swap(stack_a, id);
	ps_swap(stack_b, id);
}
