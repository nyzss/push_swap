/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:18:54 by okoca             #+#    #+#             */
/*   Updated: 2024/05/30 20:42:06 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_print_lst(t_list *node)
{
	t_list	*tmp;

	tmp = node;
	while (tmp != NULL)
	{
		ft_printf("content: %d\n", (int)(long)tmp->content);
		tmp = tmp->next;
	}
}
