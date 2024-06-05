#include "push_swap.h"
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
	median = tab[(ac) / 2];
	free(tab);
	return (median);
}