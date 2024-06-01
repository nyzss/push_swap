/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:39:45 by okoca             #+#    #+#             */
/*   Updated: 2024/06/01 21:04:25 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_node	*node;
	int		i;

	i = 0;
	node = NULL;
	if (ac == 1)
	{
		ft_printf("no args passed\n");
		return (0);
	}
	while (i < ac - 1)
	{
		ps_add_back(&node, ps_create_node(ft_atoi(av[i + 1])));
		i++;
	}
	ps_print_lst(node);
	ps_clear(&node);
	return (0);
}
