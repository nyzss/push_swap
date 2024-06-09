/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:39:45 by okoca             #+#    #+#             */
/*   Updated: 2024/06/09 10:46:56 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle(int ac, char **av)
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
	tab = ps_create_stack(ac, av);
	while (i < ac)
	{
		tmp = ps_create_node(ps_atoi(av[i]), tab[i]);
		if (!tmp)
			ps_error_exit(&stack_a, &stack_b, FREE);
		ps_add_back(&stack_a, tmp);
		i++;
	}
	if (!ps_check_sorted(stack_a))
		ps_sort(&stack_a, &stack_b);
	ps_clear(&stack_a);
	ps_clear(&stack_b);
	free(tab);
}

void	ps_check_params(int ac, char **av)
{
	int	*tab;
	int	i;
	int	j;

	i = 0;
	while (i < ac)
		ps_atoi(av[i++]);
	tab = ps_create_first_tab(ac, av);
	while (i < ac)
	{
		j = 0;
		while (j < ac)
		{
			if (tab[i] == tab[j] && j != i)
			{
				free(tab);
				ps_error_exit(NULL, NULL, NO_FREE);
			}
			j++;
		}
		i++;
	}
	i = 0;
	free(tab);
}

int	main(int ac, char **av)
{
	ac--;
	av++;
	if (ac == 1)
		return (0);
	ps_check_params(ac, av);
	handle(ac, av);
	return (0);
}
