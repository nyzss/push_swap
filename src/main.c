/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:39:45 by okoca             #+#    #+#             */
/*   Updated: 2024/06/08 12:03:28 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_sort_algo(t_node **stack_a, t_node **stack_b)
{
	int		max_index;
	int		max_bits;
	int		i;
	int		size;
	int		j;

	j = 0;
	i = 0;
	max_bits = 0;
	size = ps_get_size(*stack_a);
	max_index = size - 1;
	while (max_index >> max_bits != 0)
		++max_bits;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ps_rotate_up(stack_a, STACK_A);
			else
				ps_push(stack_b, stack_a, STACK_B);
			++j;
		}
		while (ps_get_size(*stack_b) != 0)
			ps_push(stack_a, stack_b, STACK_A);
		++i;
	}
}

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
	tab = (int *)malloc(sizeof(int) * ac);
	another_tab = (int *)malloc(sizeof(int) * ac);
	while (i < ac)
	{
		tab[i] = ft_atoi(av[i]);
		i++;
	}
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

int	main(int ac, char **av)
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
	if (ac == 1)
	{
		ft_printf("no args passed\n");
		return (0);
	}
	tab = ps_create_stack(ac - 1, av + 1);
	while (i < ac - 1)
	{
		tmp = ps_create_node(ft_atoi(av[i + 1]), tab[i]);
		if (!tmp)
			return (1);
		ps_add_back(&stack_a, tmp);
		i++;
	}
	ps_sort_algo(&stack_a, &stack_b);
	ps_clear(&stack_a);
	ps_clear(&stack_b);
}
