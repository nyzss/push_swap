
void	other_sort(t_node **stack_a)
{
	t_node	*stack_b;
	int		size;
	int		median;
	int		count;
	int		*tab;
	int		num_of_partition;

	stack_b = NULL;
	median = ps_get_median(*stack_a);
	size = ps_get_size(*stack_a);
	count = 0;
	tab = malloc(sizeof(int) * size);
	num_of_partition = 0;

	//ignore
	printf("\n\n------------#####BEFORE------------- \n\n");
	printf("size: %d\n", size);
	printf("median: %d\n", median);
	print_stuff(stack_a, &stack_b);
	//ignore

	while (size > 3)
	{
		if ((*stack_a)->content < median)
		{
			count++;
			printf("pb\n");
			ps_push(&stack_b, stack_a);
			num_of_partition++;
		}
		else
		{
			if ((*stack_a)->next->content < median)
			{
				count++;
				printf("ra\n");
				ps_rotate_up(stack_a);
			}
			else if (ps_last(*stack_a)->content < median)
			{
				count++;
				printf("rra\n");
				ps_rotate_down(stack_a);
			}
			else
			{
				count++;
				printf("ra\n");
				ps_rotate_up(stack_a);
			}
		}
		size = ps_get_size(*stack_a);
		if (!ps_check_median(*stack_a, median))
		{
			ps_sort_segment(stack_a);
			median = ps_get_median(*stack_a);
		}
	}

	//ignore
	printf("\n\n-----------###AFTER--------------- \n\n");
	printf("size: %d\n", size);
	printf("median: %d\n", median);
	print_stuff(stack_a, &stack_b);
	printf("instruction count: %d\n", count);
	//ignore
}

void	ps_sort_algo(t_node **stack_a)
{
	t_node	**tmp;
	t_node	*stack_b;
	int		size;
	int		initial_size_b;
	int		minimum;
	int		maximum;

	minimum = 0;
	maximum = 0;
	stack_b = NULL;
	tmp = stack_a;
	initial_size_b = 0;
	size = ps_get_size(*stack_a);

	//ignore
	printf("\n\nbefore: \n\n");
	print_stuff(stack_a, &stack_b);
	printf("size: %d\n", size);
	//ignore

	ps_push(&stack_b, stack_a);
	ps_push(&stack_b, stack_a);
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

	while (size > 3)
	{
		if ((*stack_a)->content < minimum)
		{
			minimum = (*stack_a)->content;
			ps_push(&stack_b, stack_a);
			ps_rotate_up(&stack_b);
		}
		else if ((*stack_a)->content > maximum)
		{
			maximum = (*stack_a)->content;
			ps_push(&stack_b, stack_a);
		}
		if ((*stack_a)->next->content > maximum)
			ps_rotate_up(stack_a);
		else if (ps_last(*stack_a)->content > maximum)
			ps_rotate_down(stack_a);
		else if ((*stack_a)->next->content < minimum)
			ps_rotate_up(stack_a);
		else if (ps_last(*stack_a)->content < minimum)
			ps_rotate_down(stack_a);
		else
			ps_rotate_up(stack_a);
		size = ps_get_size(*stack_a);
		// size--;
	}
	printf("\nmaximum: %d\n", maximum);
	printf("\nminimum: %d\n", minimum);
	printf("\n\nafter: \n\n");
	printf("size: %d\n", size);
	print_stuff(stack_a, &stack_b);
}