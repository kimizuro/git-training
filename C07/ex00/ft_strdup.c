/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:54:01 by jumorvan          #+#    #+#             */
/*   Updated: 2026/09/30 16:08:38 by jumorvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{	
		j++;
	}
	return (j);
}
char *ft_strdup(char *src)
{
	char	*dest;
	int	k;

	dest = NULL;
	k = ft_strlen(src) +1;
	dest = malloc (k * sizeof(char));
	ft_strcpy(dest, src);
	return (dest);
}
