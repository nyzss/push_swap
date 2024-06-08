/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:27:16 by okoca             #+#    #+#             */
/*   Updated: 2024/06/08 19:27:23 by okoca            ###   ########.fr       */
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
			if (ft_atoi(av[i]) == tab[j])
				break ;
			j++;
		}
		another_tab[i] = j;
		i++;
	}
	free(tab);
	return (another_tab);
}
