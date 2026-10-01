/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 13:22:57 by jumorvan          #+#    #+#             */
/*   Updated: 2026/09/13 16:29:31 by jumorvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c);

char	print(int i, int j, int x, int y)
{
	if (i == 0 && j == 0)
		return ('o');
	if (i == 0 && (y -1) == j)
		return ('o');
	if (i == (x - 1) && j == 0)
		return ('o');
	if (i == (x - 1) && (y - 1) == j)
		return ('o');
	if ((i == 0 || i == (x - 1)) && 0 < j < (y - 1))
		return ('|');
	if ((j == 0 || j == (y - 1)) && 0 < i < (x -1))
	{
		return ('-');
	}
	else
		return (' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
	{
		x = 5;
		y = 5;
	}
	i = 0;
	j = 0;
	while (j < y)
	{
		while (i < x)
		{
			ft_putchar(print(i, j, x, y));
			i++;
		}
	
	ft_putchar('\n');
	i = 0;
	j++;
	}
}

