/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:39:45 by okoca             #+#    #+#             */
/*   Updated: 2024/05/30 19:42:14 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft.h"

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%s\nlen %ld\n", argv[1], ft_strlen(argv[1]));
	}
	else
		printf("no args passed\n");
	return (0);
}
