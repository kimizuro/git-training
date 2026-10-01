/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictcreation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clviolet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 14:12:15 by clviolet          #+#    #+#             */
/*   Updated: 2026/09/27 18:59:42 by clviolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dico.h"

char	*get_dict_value(char *searched, t_dict **dict)
{
	t_dict	*tmp;

	tmp = *dict;
	while (ft_strcmp(searched, tmp->key) != 0)
	{
		if (tmp->next != NULL)
			tmp = tmp->next;
		else
			return (0);
	}
	return (tmp->value);
}

char	*get_dict_key(int index, t_dict **dict)
{
	t_dict	*tmp;
	int		i;

	i = 0;
	tmp = *dict;
	while (index > i)
	{
		if (tmp->next != NULL)
			tmp = tmp->next;
		else
			return (NULL);
		i++;
	}
	return (tmp->key);
}

void	free_linkedlist(t_dict **dict)
{
	t_dict	*tmp;
	t_dict	*prev;

	tmp = *dict;
	while (tmp != NULL)
	{
		free(tmp->key);
		free(tmp->value);
		if (tmp->next != NULL)
		{
			prev = tmp;
			tmp = tmp->next;
			free(prev);
		}
		else
		{
			free(tmp);
			return ;
		}
	}
}

int	get_max_key_size(t_dict *dict)
{
	char	*dict_key;
	int		max;
	int		i;

	i = 0;
	dict_key = get_dict_key(i, &dict);
	max = ft_strlen(dict_key);
	while (dict_key)
	{
		if (dict_key && ft_strlen(dict_key) > max)
			max = ft_strlen(dict_key);
		i++;
		dict_key = get_dict_key(i, &dict);
	}
	return (max);
}
