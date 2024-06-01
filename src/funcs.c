/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 21:35:26 by okoca             #+#    #+#             */
/*   Updated: 2024/06/01 22:27:26 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_swap(t_node *node)
{
	t_node	*tmp;
	int		i;
	int		tmp_content;

	i = 0;
	tmp = node;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
		if (i > 1)
			break ;
	}
	if (i < 2)
		return ;
	tmp_content = node->next->content;
	node->next->content = node->content;
	node->content = tmp_content;
}

void	ps_swap_both(t_node *stack_a, t_node *stack_b)
{
	ps_swap(stack_a);
	ps_swap(stack_b);
}

void	ps_push_a(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;
	t_node	*check_tmp;
	int		i;

	i = 0;
	check_tmp = (*stack_b);
	while (check_tmp != NULL)
	{
		i++;
		check_tmp = check_tmp->next;
		if (i > 1)
			break ;
	}
	if (i < 1)
		return ;
	tmp = (*stack_b);
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_a)->next;
	*stack_a = tmp;
}