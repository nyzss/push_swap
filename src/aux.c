/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:27:16 by okoca             #+#    #+#             */
/*   Updated: 2024/06/09 09:49:09 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_sort_tab(int ac, int **tab)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < ac)
	{
		j = i;
		while (j < ac)
		{
			if (tab[0][i] > tab[0][j])
			{
				tmp = tab[0][i];
				tab[0][i] = tab[0][j];
				tab[0][j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	*ps_create_stack(int ac, char **av)
{
	int		i;
	int		j;
	int		*tab;
	int		*another_tab;

	i = 0;
	another_tab = (int *)malloc(sizeof(int) * ac);
	tab = ps_create_first_tab(ac, av);
	ps_sort_tab(ac, &tab);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (j < ac)
		{
			if (ps_atoi(av[i]) == tab[j])
				break ;
			j++;
		}
		another_tab[i] = j;
		i++;
	}
	free(tab);
	return (another_tab);
}

static int	ft_isspace(int c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ps_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if ((str[i] != '\0' && !(ft_isdigit(str[i])))
		|| (result > INT_MAX || result < INT_MIN))
		ps_error_exit(NULL, NULL, NO_FREE);
	return (result * sign);
}

void	ps_error_exit(t_node **stack_a, t_node **stack_b, int is_free)
{
	if (is_free == FREE)
	{
		ps_clear(stack_a);
		ps_clear(stack_b);
	}
	ft_putstr_fd("Error\n", STDERR_FILENO);
	exit (EXIT_FAILURE);
}