/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 23:29:05 by swaville          #+#    #+#             */
/*   Updated: 2026/09/12 18:05:07 by swaville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	print(int i, int j, int x, int y)
{
	if (i == 0 && j == 0)
		return ('A');
	if (i == 0 && (y - 1) == j)
		return ('C');
	if (i == (x - 1) && j == 0)
		return ('A');
	if (i == (x - 1) && (y - 1) == j)
		return ('C');
	if (i == 0 || j == 0)
		return ('B');
	if (i == (x - 1) || j == (y -1))
		return ('B');
	else
		return (' ');
}

void	rush(int x, int y)
{
	int		i;
	int		j;
	char	c;

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
			c = print(i, j, x, y);
			ft_putchar(c);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
}
