/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 10:07:41 by jumorvan          #+#    #+#             */
/*   Updated: 2026/10/01 14:02:13 by jumorvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));

	if (tab == 0)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
int main(void)
{
	int	max = 75;
	int	min = 1;
	int	i;
	int	*tab;
	i = 0;
	ft_range(min, max);
	tab = ft_range(min, max);
	while (i < max -1)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);

}
