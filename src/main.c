/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:39:45 by okoca             #+#    #+#             */
/*   Updated: 2024/05/30 21:01:47 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**ps_create_list(int argc, char **argv)
{
	int		i;
	int		*tab;
	t_list	**node;
	// t_list	*tmp;

	i = 0;
	tab = ps_args_to_tab(argc, argv);
	if (!tab)
		return (NULL);
	node = NULL;
	// tmp = NULL;
	while (i < argc)
	{
		if (!*node)
		{
			*node = ft_lstnew((void *)(long)tab[i]);
		}
		else
		{
			ft_lstlast(*node)->next = ft_lstnew((void *)(long)tab[i]);
		}
		// ft_printf("i: %d\ncontent: %d\n",i,  tab[i]);
		// tmp = ft_lstnew((void *)(long)tab[i]);
		// ft_lstadd_back(node, tmp);
		i++;
	}
	free(tab);
	return (node);
}

// if (!tmp)
// {
// 	free(tab);
// 	ft_lstclear(node, ps_dummy_fn);
// }

int		main(int argc, char **argv)
{
	t_list	**node;

	argc--;
	argv++;
	if (argc == 0)
	{
		ft_printf("no args passed\n");
		return (0);
	}
	node = ps_create_list(argc, argv);
	// ft_printf("here!!\n\n");
	(void)node;
	// ps_print_lst(*node);
	return (0);
}
