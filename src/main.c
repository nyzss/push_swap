/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:39:45 by okoca             #+#    #+#             */
/*   Updated: 2024/06/02 22:13:03 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*tmp;
	int		i;

	i = 0;
	stack_a = NULL;
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
	ft_printf("\n\n#########BEFORE: \n\n");
	ft_printf("stack: a");
	ps_print_lst(stack_a);
	ft_printf("stack: b");
	// ps_print_lst(stack_b);

	// ps_swap(stack_a);
	// ps_push(&stack_b, &stack_a);
	// ps_push(&stack_b, &stack_a);
	// ps_push(&stack_b, &stack_a);
	// ps_rotate_up_both(&stack_a, &stack_b);
	// ps_rotate_down_both(&stack_a, &stack_b);
	// ps_swap(stack_a);
	// ps_push(&stack_a, &stack_b);
	// ps_push(&stack_a, &stack_b);
	// ps_push(&stack_a, &stack_b);
	ps_sorting_algo(&stack_a, ps_get_median(ac, av));
	ft_printf("\n\n#########AFTER: \n\n");
	ft_printf("stack: a");
	ps_print_lst(stack_a);
	ft_printf("stack: b");
	// ps_print_lst(stack_b);
	ft_printf("\n\n\n");


	ps_clear(&stack_a);
}

int	ps_get_median(int ac, char **av)
{
	int	i;
	int	j;
	int	tmp;
	int	*tab;
	int median;

	i = 0;
	median = 0;
	tmp = 0;
	tab = malloc(sizeof(int) * (ac - 1));
	while (i < ac - 1)
	{
		tab[i] = ft_atoi(av[i + 1]);
		i++;
	}
	while (i < ac - 1)
	{
		j = i;
		while (j < ac - 1)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	median = tab[(ac - 1) / 2];
	free(tab);
	return (median);
}

int	ps_get_smallest(t_node *stack)
{
	int	smallest;

	smallest = stack->content;
	while (stack != NULL)
	{
		if (stack->content < smallest)
			smallest = stack->content;
		stack = stack->next;
	}
	return (smallest);
}

int	ps_get_size(t_node *stack)
{
	int	i;

	i = 0;
	while (stack != NULL)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int	ps_check_sorted(t_node *stack)
{
	t_node	*tmp;

	while (stack != NULL)
	{
		tmp = stack;
		while (tmp != NULL)
		{
			if (tmp->content < stack->content)
				return (0);
			tmp = tmp->next;
		}
		stack = stack->next;
	}
	return (1);
}

void	ps_sorting_algo(t_node **stack_a, int median)
{
	t_node	*stack_b;
	// t_node	*tmp;
	// int		smallest;
	int		s_size;

	stack_b = NULL;
	// tmp = (*stack_a);
	s_size = ps_get_size(*stack_a);
	if (s_size == 1)
		return ;
	else if (s_size == 2 && (*stack_a)->content > (*stack_a)->next->content)
	{
		ps_swap(*stack_a);
		return ;
	}
	else if (s_size == 3 && !ps_check_sorted(*stack_a))
	{
		if (((*stack_a)->content > (*stack_a)->next->content) && ((*stack_a)->next->content > (*stack_a)->next->next->content))
		{
			if ((*stack_a)->next->content < (*stack_a)->next->next->content)
				ps_rotate_up(stack_a);
			else
			{
				ps_swap((*stack_a));
				ps_rotate_down(stack_a);
			}
		}
		else if ((*stack_a)->content > (*stack_a)->next->content)
			ps_swap(*stack_a);
		else
		{
			ps_swap((*stack_a));
			ps_rotate_up(stack_a);
		}
	}
	ft_printf("median: %d\n", median);
	ps_clear(&stack_b);
}