/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:39:45 by okoca             #+#    #+#             */
/*   Updated: 2024/06/05 22:29:30 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stuff(t_node **stack_a, t_node **stack_b)
{
	ft_printf("stack: a");
	ps_print_lst(*stack_a);
	ft_printf("stack: b");
	ps_print_lst(*stack_b);
}

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
	ps_sort_algo(&stack_a);
	// print_stuff(&stack_a);
	ps_clear(&stack_a);
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

void	ps_sort_algo(t_node **stack_a)
{
	t_node	*tmp;
	t_node	*stack_b;
	int		size;
	int		initial_size_b;
	int		i;
	int		minimum;
	int		maximum;

	i = 0;
	minimum = 0;
	maximum = 0;
	stack_b = NULL;
	tmp = *stack_a;
	initial_size_b = 0;
	size = ps_get_size(tmp);

	//ignore
	printf("\n\nbefore: \n\n");
	print_stuff(stack_a, &stack_b);
	//ignore
	printf("size: %d\n", size);

	while (i < size)
	{
		if (initial_size_b == 1)
		{
			ps_push(&stack_b, &tmp);
			ps_push(&stack_b, &tmp);
			if (stack_b->content > stack_b->next->content)
			{
				maximum = stack_b->content;
				minimum = stack_b->next->content;
			}
			else
			{
				maximum = stack_b->next->content;
				minimum = stack_b->content;
				ps_rotate_up(&stack_b);

			}
			initial_size_b = 1;
			i += 2;
		}
		i++;
	}
	printf("\nmaximum: %d\n", maximum);
	printf("\nminimum: %d\n", minimum);
	printf("\n\nafter: \n\n");
	printf("size: %d\n", size);
	print_stuff(stack_a, &stack_b);
}
//tu push temp, du coup temp change de place et fini dans la stack_b,
//le mieux ca serait d'avoir un size, et iter pendant la size?