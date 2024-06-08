/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 11:27:55 by okoca             #+#    #+#             */
/*   Updated: 2024/06/08 12:11:43 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	while (stack != NULL)
	{
		if (stack->content > stack->next->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	*ps_create_first_tab(int ac, char **av)
{
	int	*tab;
	int	i;

	i = 0;
	tab = (int *)malloc(sizeof(int) * ac);
	while (i < ac)
	{
		tab[i] = ft_atoi(av[i]);
		i++;
	}
	return (tab);
}
