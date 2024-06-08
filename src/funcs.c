/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 21:35:26 by okoca             #+#    #+#             */
/*   Updated: 2024/06/08 12:01:12 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_swap(t_node *node, int id)
{
	int		tmp_content;

	if (!ps_check_lst_len(node, 2))
		return ;
	tmp_content = node->next->content;
	node->next->content = node->content;
	node->content = tmp_content;
	if (id == STACK_A)
		ft_printf("sa\n");
	else
		ft_printf("sb\n");
}

void	ps_push(t_node **destination, t_node **source, int id)
{
	t_node	*tmp;

	if (!ps_check_lst_len(*source, 1))
		return ;
	tmp = (*source)->next;
	(*source)->next = (*destination);
	(*destination) = (*source);
	(*source) = tmp;
	if (id == STACK_A)
		ft_printf("pa\n");
	else
		ft_printf("pb\n");
}

int	ps_check_lst_len(t_node *head, int len)
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

void	ps_rotate_up(t_node **head, int id)
{
	t_node	*tmp;

	if (!ps_check_lst_len(*head, 2))
		return ;
	tmp = (*head);
	(*head) = (*head)->next;
	tmp->next = NULL;
	ps_last(*head)->next = tmp;
	if (id == STACK_A)
		ft_printf("ra\n");
	else
		ft_printf("rb\n");
}

void	ps_rotate_down(t_node **head, int id)
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
	if (id == STACK_A)
		ft_printf("rra\n");
	else
		ft_printf("rrb\n");
}
