/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clviolet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 11:42:24 by clviolet          #+#    #+#             */
/*   Updated: 2026/09/27 21:14:56 by clviolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_dico.h"

void	puterror(char *str, t_dict **dict)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	free_linkedlist(dict);
}

void	set_path_val(char **path, char **val, char *new_path, char *new_val)
{
	*path = new_path;
	*val = new_val;
}

int	main(int ac, char **av)
{
	t_dict	*dict;
	char	*path;
	char	*val;

	dict = NULL;
	if (ac != 2 && ac != 3)
	{
		puterror("Error\n", &dict);
		return (1);
	}
	if (ac == 2)
		set_path_val(&path, &val, "./numbers.dict", av[1]);
	else
		set_path_val(&path, &val, av[1], av[2]);
	if (dict_create(&dict, path) == 0)
	{
		puterror("Dict Error\n", &dict);
		return (1);
	}
	if (1 == convert_number(val, dict))
	{
		puterror("Dict Error\n", &dict);
		return (1);
	}
	free_linkedlist(&dict);
}
