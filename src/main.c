/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:39:45 by okoca             #+#    #+#             */
/*   Updated: 2024/06/08 21:42:07 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	handle(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;
	t_node	*tmp;
	int		*tab;
	int		i;

	i = 0;
	tmp = NULL;
	stack_a = NULL;
	stack_b = NULL;
	tab = ps_create_stack(ac - 1, av + 1);
	while (i < ac - 1)
	{
		tmp = ps_create_node(ft_atoi(av[i + 1]), tab[i]);
		if (!tmp)
			return (1);
		ps_add_back(&stack_a, tmp);
		i++;
	}
	if (!ps_check_sorted(stack_a))
		ps_sort(&stack_a, &stack_b);
	ps_clear(&stack_a);
	ps_clear(&stack_b);
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		ft_printf("no args passed\n");
		return (0);
	}
	if (handle(ac, av) == 1)
		return (0);
	else
		return (1);
}
