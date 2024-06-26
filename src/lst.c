/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:18:54 by okoca             #+#    #+#             */
/*   Updated: 2024/06/08 11:31:31 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ps_create_node(int content, int index)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->content = content;
	new->index = index;
	new->next = NULL;
	return (new);
}

t_node	*ps_last(t_node *head)
{
	t_node	*tmp;

	tmp = head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

void	ps_add_back(t_node **head, t_node *new)
{
	if (!(*head))
		*head = new;
	else
		ps_last(*head)->next = new;
}

void	ps_clear(t_node **head)
{
	t_node	*tmp;

	if (!head)
		return ;
	tmp = (*head);
	while (tmp != NULL)
	{
		(*head) = (*head)->next;
		free(tmp);
		tmp = (*head);
	}
	*head = NULL;
}
