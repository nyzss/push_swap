/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:00:31 by okoca             #+#    #+#             */
/*   Updated: 2024/06/01 22:16:55 by okoca            ###   ########.fr       */
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
	int	content;
} t_node;

int		*ps_args_to_tab(int argc, char **argv);

void	ps_dummy_fn(void *f);

void	ps_print_lst(t_node *node);

t_node	*ps_create_node(int content);

t_node	*ps_last(t_node *head);

void	ps_add_back(t_node **head, t_node *new);

void	ps_clear(t_node **head);

void	ps_swap(t_node *node);

void	ps_swap_both(t_node *stack_a, t_node *stack_b);

void	ps_push_a(t_node **stack_a, t_node **stack_b);

#endif
