/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 21:35:26 by okoca             #+#    #+#             */
/*   Updated: 2024/06/06 11:31:05 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_swap(t_node *node)
{
	int		tmp_content;

	if (!ps_check_lst_len(node, 2))
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

void	ps_push(t_node **destination, t_node **source)
{
	t_node	*tmp;

	if (!ps_check_lst_len(*source, 1))
		return ;
	tmp = (*source)->next;
	(*source)->next = (*destination);
	(*destination) = (*source);
	(*source) = tmp;
}
int		ps_check_lst_len(t_node *head, int len)
{
	int	i;

	i = 0;
	while (head != NULL)
	{
		head = head->next;
		i++;
		if (i >= len)
			break ;
	}
	if (i < len)
		return (0);
	return (1);
}

void	ps_rotate_up(t_node **head)
{
	t_node	*tmp;

	if (!ps_check_lst_len(*head, 2))
		return ;
	tmp = (*head);
	(*head) = (*head)->next;
	tmp->next = NULL;
	ps_last(*head)->next = tmp;
}

void	ps_rotate_up_both(t_node **first_stack, t_node **second_stack)
{
	ps_rotate_up(first_stack);
	ps_rotate_up(second_stack);
}

void	ps_rotate_down(t_node **head)
{
	t_node	*tmp;

	if (!ps_check_lst_len(*head, 2))
		return ;
	tmp = *head;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	tmp->next->next = (*head);
	(*head) = tmp->next;
	tmp->next = NULL;
}

void	ps_rotate_down_both(t_node **first_stack, t_node **second_stack)
{
	ps_rotate_down(first_stack);
	ps_rotate_down(second_stack);
}