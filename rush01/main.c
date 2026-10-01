/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idufourg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 17:01:58 by idufourg          #+#    #+#             */
/*   Updated: 2026/09/20 20:06:55 by idufourg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "./utils/utils.h"
#include "./check/check.h"

int	*norm_arg(char *str, int grid_size)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(((grid_size * grid_size) + 1) * sizeof(int));
	if (tab == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			tab[i] = ctoi(str[i]);
		}
		i++;
	}
	return (tab);
}

int	main(int argc, char **argv)
{
	int	values;

	if (argc != 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	values = *norm_arg(argv[2], ctoi(*argv[1]));
	if ((count_i(&values) - 1 / ctoi(*argv[1])) != ctoi(*argv[1]))
	{
		write(1, "Error: wrong value amount\n", 26);
		return (1);
	}
	if (validate_seq_4() == 1)
		return (1);

	return (0);
}
