/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 17:59:17 by jumorvan          #+#    #+#             */
/*   Updated: 2026/09/29 18:06:41 by jumorvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	int	i;

	i = 0;
	while (i < argc)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
		i++;
	}
	printf("mon nombre d'args est de %d\n", argc);
	printf("Je veux mon dernier element qui est : %s\n", argv[argc - 1]);
}
