/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:39:45 by okoca             #+#    #+#             */
/*   Updated: 2024/06/02 17:21:10 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;
	t_node	*tmp;
	int		i;

	i = 0;
	stack_a = NULL;
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
		ps_add_back(&stack_a, tmp);
		i++;
	}
	// ps_add_back(&stack_b, ps_create_node(1337));
	// ps_add_back(&stack_b, ps_create_node(999));
	ft_printf("\n\n#########BEFORE: \n\n");
	ft_printf("stack: a");
	ps_print_lst(stack_a);
	ft_printf("stack: b");
	ps_print_lst(stack_b);

	ps_swap(stack_a);
	ps_push(&stack_b, &stack_a);
	ps_push(&stack_b, &stack_a);
	ps_push(&stack_b, &stack_a);
	ps_rotate_up_both(&stack_a, &stack_b);
	ps_rotate_down_both(&stack_a, &stack_b);
	ps_swap(stack_a);
	ps_push(&stack_a, &stack_b);
	ps_push(&stack_a, &stack_b);
	ps_push(&stack_a, &stack_b);

	ft_printf("\n\n#########AFTER: \n\n");
	ft_printf("stack: a");
	ps_print_lst(stack_a);
	ft_printf("stack: b");
	ps_print_lst(stack_b);
	ft_printf("\n\n\n");


	ps_clear(&stack_a);
	ps_clear(&stack_b);
}
