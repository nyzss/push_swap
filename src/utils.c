/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 11:27:55 by okoca             #+#    #+#             */
/*   Updated: 2024/06/09 17:38:14 by okoca            ###   ########.fr       */
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
	while (stack->next != NULL)
	{
		if (stack->index > stack->next->index)
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
	if (!tab)
		ps_error_exit(NULL, NULL, NO_FREE);
	while (i < ac)
	{
		tab[i] = ps_atoi(av[i]);
		i++;
	}
	return (tab);
}

int	ps_get_maxbits(int size)
{
	int	max_bits;
	int	max_index;

	max_bits = 0;
	max_index = size - 1;
	while (max_index >> max_bits != 0)
		++max_bits;
	return (max_bits);
}
