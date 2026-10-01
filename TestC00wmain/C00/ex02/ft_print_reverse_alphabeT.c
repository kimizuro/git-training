/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabeT.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 12:17:01 by jumorvan          #+#    #+#             */
/*   Updated: 2026/09/14 09:18:49 by jumorvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}
int main (void)
{
	ft_reverse_alphabet();
	return 0;
}
