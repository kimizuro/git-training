/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:57:47 by jumorvan          #+#    #+#             */
/*   Updated: 2026/09/25 11:09:29 by jumorvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int ft_j(char *str)
{
	int x = ft_strlen(str);
	int i = 0;
	int j = 0;

	while (i < x)
	{
		if (str[i] == 'J')
		{
			j++;
		}
	i++;
	}
	return j;
}
int main(void)
{
	printf("%d", ft_j("JwewqewqewqJqweqweJ"));
}
