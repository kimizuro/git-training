/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 07:48:22 by jumorvan          #+#    #+#             */
/*   Updated: 2026/09/21 09:34:51 by jumorvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
#include <stdio.h>
int main(void)
{
	int i = 45;
	int j = 5;
	ft_ultimate_div_mod(&i, &j);
	printf("%d, %d", i, j);
}
