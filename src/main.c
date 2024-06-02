/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:39:45 by okoca             #+#    #+#             */
/*   Updated: 2024/06/02 17:06:15 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_node	*node;
	t_node	*stack_b;
	t_node	*tmp;
	int		i;

	i = 0;
	node = NULL;
	stack_b = NULL;
	if (ac == 1)
	{
		ft_printf("no args passed\n");
		return (0);
	}
	while (i < ac - 1)
	{
		tmp = ps_create_node(ft_atoi(av[i + 1]));
		if (!tmp)
			return (1);
		ps_add_back(&node, tmp);
		i++;
	}
	ps_add_back(&stack_b, ps_create_node(1337));
	ps_add_back(&stack_b, ps_create_node(999));
	ft_printf("\n\n#########BEFORE: \n\n");
	ft_printf("stack: a");
	ps_print_lst(node);
	// ft_printf("stack: b");
	// ps_print_lst(stack_b);
	// ps_swap(node);

	// ps_push(&node, &stack_b);
	// ps_push(&node, &stack_b);
	ps_rotate_down(&node);
	ps_rotate_down(&node);

	ft_printf("\n\n#########AFTER: \n\n");
	ft_printf("stack: a");
	ps_print_lst(node);
	// ft_printf("stack: b");
	// ps_print_lst(stack_b);
	ft_printf("\n\n\n");


	ps_clear(&node);
	ps_clear(&stack_b);
}
