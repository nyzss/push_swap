/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:39:45 by okoca             #+#    #+#             */
/*   Updated: 2024/06/08 19:40:38 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_sort_algo(t_node **stack_a, t_node **stack_b)
{
	int	max_bits;
	int	i;
	int	size;
	int	j;

	j = 0;
	i = 0;
	size = ps_get_size(*stack_a);
	max_bits = ps_get_maxbits(size);
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

void	ps_sort(t_node **stack_a, t_node **stack_b)
{
	int	size;

	size = ps_get_size(*stack_a);
	if (size == 2)
	{
		if ((*stack_a)->index > (*stack_a)->next->index)
			ps_swap(*stack_a, STACK_A);
	}
	else if (size == 3)
		ps_sort_tree(stack_a);
	else
		ps_sort_algo(stack_a, stack_b);
}

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
