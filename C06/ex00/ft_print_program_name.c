/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 19:24:37 by jumorvan          #+#    #+#             */
/*   Updated: 2026/09/30 00:37:19 by jumorvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char j)
{
	write(1, &j, 1);
}

int	main(int argc, char **argv)
{
	int	j;

	(void)argc;
	j = 0;
	while (argv[0][j] != '\0')
	{
		ft_putchar(argv[0][j]);
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
