/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negativE.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 15:46:18 by jumorvan          #+#    #+#             */
/*   Updated: 2026/09/14 09:30:56 by jumorvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}
int main(void)
{
	ft_is_negative(42);
	ft_is_negative(-42);
	ft_is_negative(42);
	ft_is_negative(0);
	return 0;
}
