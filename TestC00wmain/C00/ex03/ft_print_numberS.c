/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numberS.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 12:22:16 by jumorvan          #+#    #+#             */
/*   Updated: 2026/09/14 09:20:41 by jumorvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
}
int main(void)
{
	ft_print_numbers();
	return 0;
}
