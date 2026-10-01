/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 23:29:05 by swaville          #+#    #+#             */
/*   Updated: 2026/09/12 18:00:39 by swaville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	print(int i, int j, int x, int y)
{
	if (i == 0 && j == 0)
		return ('o');
	if (i == 0 && (y - 1) == j)
		return ('o');
	if (i == (x - 1) && j == 0)
		return ('o');
	if (i == (x - 1) && (y - 1) == j)
		return ('o');
	if ((i == 0 || i == (x - 1)) && 0 < j < (y -1))
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
