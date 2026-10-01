/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idufourg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 17:43:24 by idufourg          #+#    #+#             */
/*   Updated: 2026/09/20 19:31:15 by idufourg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	count_i(int *val)
{
	int	i;

	i = 0;
	while (val[i])
	{
		i++;
	}
	return (i);
}

int	count_s(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ctoi(char chr)
{
	int	val;

	val = 0;
	if (!(chr >= '0' && chr <= '9'))
	{
		return (0);
	}
	val = chr;
	return (val - 48);
}
