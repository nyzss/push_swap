/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:00:31 by okoca             #+#    #+#             */
/*   Updated: 2024/06/08 10:12:42 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

//REMOVE
# include <stdio.h>
//REMOVE

typedef struct node
{
	struct node *next;
	int			content;
	int			index;
} t_node;

int		*ps_args_to_tab(int argc, char **argv);

void	ps_print_lst(t_node *node);

t_node	*ps_create_node(int content, int index);

t_node	*ps_last(t_node *head);

void	ps_add_back(t_node **head, t_node *new);

void	ps_clear(t_node **head);

void	ps_swap(t_node *node);

void	ps_swap_both(t_node *stack_a, t_node *stack_b);

void	print_stuff(t_node **stack_a, t_node **stack_b);

void	other_sort(t_node **stack_a);

// pushes the first element of 'source' to 'destination'
//so source -> destination
void	ps_push(t_node **destination, t_node **source);


void	ps_sort_algo(t_node **stack_a, t_node **stack_b);

void	ps_rotate_up(t_node **head);

void	ps_rotate_up_both(t_node **first_stack, t_node **second_stack);

int		ps_check_lst_len(t_node *head, int len);

void	ps_rotate_down(t_node **head);

void	ps_rotate_down_both(t_node **first_stack, t_node **second_stack);

int		ps_check_sorted(t_node *stack);

int		ps_get_size(t_node *stack);

// void	ps_sorting_algo(t_node **stack_a, int median);

// int		ps_get_smallest(t_node *stack);

// int		ps_get_median(int ac, char **av);

#endif
