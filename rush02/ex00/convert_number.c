/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aivaucan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 19:24:37 by aivaucan          #+#    #+#             */
/*   Updated: 2026/09/27 19:44:00 by qlamy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pkg_utils.h"

int	convert_number(char *str, t_dict *dict)
{
	int	nbr_size;
	int	pkg_size;
	int	pkg_type;

	nbr_size = ft_strlen(str);
	if (!nbr_size || get_max_key_size(dict) + 2 < ft_strlen(str))
		return (1);
	if (nbr_size == 1 && str[0] == '0')
	{
		write(1, get_dict_value("0", &dict),
			ft_strlen(get_dict_value("0", &dict)));
		return (0);
	}
	while (nbr_size > 0)
	{
		pkg_size = get_pkg_size(nbr_size);
		pkg_type = (nbr_size / 3) + (nbr_size % 3 != 0) - 1;
		convert_pkg(str, pkg_size, pkg_type, dict);
		str = &str[pkg_size];
		nbr_size -= pkg_size;
	}
	write(1, "\n", 1);
	return (0);
}
