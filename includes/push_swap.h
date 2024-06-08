/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:00:31 by okoca             #+#    #+#             */
/*   Updated: 2024/06/08 19:57:05 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

//REMOVE
# include <stdio.h>
//REMOVE

# define STACK_A 0
# define STACK_B 1

typedef struct node
{
	struct node	*next;
	int			content;
	int			index;
}	t_node;

t_node	*ps_create_node(int content, int index);

t_node	*ps_last(t_node *head);

void	ps_add_back(t_node **head, t_node *new);

void	ps_clear(t_node **head);

int		ps_check_sorted(t_node *stack);

int		ps_get_size(t_node *stack);

int		ps_get_maxbits(int size);

int		*ps_create_first_tab(int ac, char **av);

void	ps_sort_tab(int ac, int **tab);

int		*ps_create_stack(int ac, char **av);

//sort
void	ps_sort(t_node **stack_a, t_node **stack_b);

void	ps_sort_medium(t_node **stack_a, t_node **stack_b);

void	ps_sort_small(t_node **stack_a);

void	ps_sort_big(t_node **stack_a, t_node **stack_b);
//sort

//HELPER
void	ps_swap(t_node *node, int id);

void	ps_push(t_node **destination, t_node **source, int id);

void	ps_rotate_up(t_node **head, int id);

int		ps_check_lst_len(t_node *head, int len);

void	ps_rotate_down(t_node **head, int id);

void	ps_swap_both(t_node *stack_a, t_node *stack_b, int id);

void	ps_rotate_up_both(t_node **f_stack, t_node **s_stack, int id);

void	ps_rotate_down_both(t_node **f_stack, t_node **s_stack, int id);
//HELPER

#endif
