/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pkg_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 14:01:58 by sfranks           #+#    #+#             */
/*   Updated: 2026/09/27 19:47:21 by qlamy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_dico.h"
#include "ft_str_utils.h"

int	get_pkg_size(int size)
{
	if (size % 3 == 0 && size >= 3)
		return (3);
	return (size % 3);
}

char	*get_pkg_type(int zeros, t_dict *dict)
{
	char	*dict_key;
	int		i;
	int		key_char;

	if (!zeros)
		return (NULL);
	i = 0;
	dict_key = get_dict_key(i, &dict);
	while (dict_key)
	{
		key_char = 1;
		while (dict_key[key_char] == '0')
			key_char++;
		if (key_char - 1 == zeros)
			return (get_dict_value(dict_key, &dict));
		i++;
		dict_key = get_dict_key(i, &dict);
	}
	return (NULL);
}

char	*get_val(char *str, int str_size, t_dict *dict)
{
	int		i;
	char	*dict_key;

	i = 0;
	if (str[0] == '0')
		return (NULL);
	dict_key = get_dict_key(0, &dict);
	while (dict_key)
	{
		if ((ft_strlen(dict_key) == 1 || (str_size == 2
					&& (*str != '1' || ft_strlen(dict_key) == 2)))
			&& dict_key[0] == str[0]
			&& (str[0] != '1' || str[1] == dict_key[1] || str_size != 2))
			return (get_dict_value(dict_key, &dict));
		dict_key = get_dict_key(i, &dict);
		i++;
	}
	return (NULL);
}

void	put_pkg(char *nbr, char *pkg[5], int pkg_type, int max_i)
{
	int	i;

	i = 0;
	while (i <= max_i)
	{
		write(1, pkg[i], ft_strlen(pkg[i]));
		write(1, " ", (i < max_i));
		i++;
	}
	write(1, " ", pkg_type > 0 && (3 > count_zeros(nbr, 3)));
}

int	convert_pkg(char *str, int pkg_size, int pkg_type, t_dict *dict)
{
	char	*strp;
	char	*pkg[5];
	int		pkg_i;

	strp = str;
	pkg_i = 0;
	while (pkg_size)
	{
		if (*str != '0')
		{
			pkg[pkg_i] = get_val(str, pkg_size, dict);
			pkg[pkg_i + 1] = get_pkg_type((pkg_size == 3) * 2, dict);
			pkg_i += 1 + (pkg_size == 3);
		}
		pkg_size = pkg_size - 1 - (str[0] == '1' && (pkg_size == 2));
		str++;
	}
	pkg[pkg_i] = get_pkg_type(
			pkg_type * 3 * (3 != count_zeros(strp, str - strp)),
			dict
			);
	pkg_i -= !pkg[pkg_i];
	put_pkg(str, pkg, pkg_type, pkg_i);
	return (0);
}
