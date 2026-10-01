/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 14:54:40 by swaville          #+#    #+#             */
/*   Updated: 2026/09/12 18:17:48 by swaville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	if (argc > 3)
	{
		write(1, "2 arguments valide seulement.", 29);
		return (0);
	}
	if (atoi(argv[1]) >= 0 && atoi(argv[2]) >= 0)
		rush(atoi(argv[1]), atoi(argv[2]));
	else
		write(1, "erreur, un des deux arguments n'est pas valide", 46);
	return (0);
}
