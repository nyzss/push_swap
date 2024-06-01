/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:39:45 by okoca             #+#    #+#             */
/*   Updated: 2024/06/01 11:43:44 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	**ps_create_list(int argc, char **argv);
//TODO

int		main(int argc, char **argv)
{
	t_node	*node;

	argc--;
	argv++;
	if (argc == 0)
	{
		ft_printf("no args passed\n");
		return (0);
	}
	node = ps_create_node(100);
	ps_print_lst(node);
	ps_clear(&node);
	return (0);
}
