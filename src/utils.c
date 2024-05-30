/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:58:15 by okoca             #+#    #+#             */
/*   Updated: 2024/05/30 20:51:01 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*ps_args_to_tab(int argc, char **argv)
{
	int	i;
	int	*tab;

	i = 0;
	tab = (int *)malloc(sizeof(int) * argc - 1);
	if (!tab)
		return (NULL);
	while (i < argc)
	{
		tab[i] = ft_atoi(argv[i]);
		i++;
	}
	return (tab);
}

void	ps_dummy_fn(void *f)
{
	(void)f;
	return ;
}
