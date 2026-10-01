/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabeT.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 17:08:25 by jumorvan          #+#    #+#             */
/*   Updated: 2026/09/14 09:16:59 by jumorvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}
int main(void)
{
	ft_print_alphabet();
	return (0);
}
