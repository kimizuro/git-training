/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idufourg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 17:56:59 by idufourg          #+#    #+#             */
/*   Updated: 2026/09/20 20:05:25 by idufourg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/utils.h"

int	validate_slice_4(int *slice)
{
	int	i;
	int	val;

	i = 0;
	val = 0;
	while(slice)
	{
		val = slice[i];
		if ((val < 1 || val > 4)
			|| (val == 4 && val + slice[i + 1] == 8)
			|| (val == 1 && val + slice[i + 1] == 2)
			|| (val == 3 && val + slice[i + 1] + slice[i + 2] == 9))
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	validate_seq_4(int *tab)
{
	int	i;
	int	val;
	int	limit;
	int	*slice;

	i = 0;
	val = 0;
	limit = 4;
	while (tab)
	{
		if (count_i(slice) == 0)
			slice = malloc(sizeof(int) * 5);
		if (count_i(slice) < limit)
			slice++ = tab++;
		if (count_i(slice) == limit)
		{
			if (validate_slice_4(slice) == 1)
				return (1);
			free(slice);
		}
	}
	return (0);
}
