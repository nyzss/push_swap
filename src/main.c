/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:39:45 by okoca             #+#    #+#             */
/*   Updated: 2024/06/09 17:37:06 by okoca            ###   ########.fr       */
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
	stack_a = NULL;
	stack_b = NULL;
	tab = ps_create_stack(ac, av);
	if (!tab)
		ps_error_exit(NULL, NULL, NO_FREE);
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

void	ps_check_duplicate(int ac, char **av)
{
	int	*tab;
	int	i;
	int	j;

	i = 0;
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
	free(tab);
}

void	ps_check_params(int ac, char **av)
{
	int	i;
	int	j;
	int	last_digit;

	i = 0;
	while (i < ac)
	{
		if (av[i][0] == '\0')
			ps_error_exit(NULL, NULL, NO_FREE);
		last_digit = 0;
		j = 0;
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]))
				last_digit++;
			j++;
		}
		if (last_digit == 0)
			ps_error_exit(NULL, NULL, NO_FREE);
		ps_atoi(av[i++]);
	}
	ps_check_duplicate(ac, av);
}

int	main(int ac, char **av)
{
	ac--;
	av++;
	if (ac == 0)
		return (0);
	ps_check_params(ac, av);
	handle(ac, av);
	return (0);
}
