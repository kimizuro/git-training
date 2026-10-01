/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creadictoff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clviolet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 11:53:16 by clviolet          #+#    #+#             */
/*   Updated: 2026/09/27 18:35:04 by clviolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dico.h"

char	*get_key(char *buf, int *pos)
{
	int		len;
	char	*key;
	int		i;

	i = 0;
	len = 0;
	while (buf [*pos + len] >= '0' && buf [*pos + len] <= '9')
		len++;
	key = malloc(sizeof(char) * len + 1);
	if (key == NULL)
	{
		free (key);
		return (NULL);
	}
	while (i < len)
	{
		key[i] = buf[*pos + i];
		i++;
	}
	key[i] = '\0';
	*pos += len;
	while (buf[*pos] == ' ' )
		(*pos)++;
	return (key);
}

char	*get_value(char *buf, int *pos)
{
	int		len;
	char	*value;
	int		i;

	i = 0;
	while (buf[*pos] == ' ')
		(*pos)++;
	len = 0;
	while (buf[*pos + len] >= ' ' && buf[*pos + len] <= '~')
		len++;
	value = malloc (sizeof(char) * len + 1);
	if (!value)
	{
		free (value);
		return (NULL);
	}
	while (i < len)
	{
		value[i] = buf [*pos + i];
		i++;
	}
	value[i] = '\0';
	*pos += len;
	return (value);
}

int	dict_add(t_dict **dict, char *key, char *value)
{
	t_dict	*temp;

	temp = malloc(sizeof(t_dict));
	if (temp == NULL)
	{
		free (key);
		free (value);
		free (temp);
		return (0);
	}
	temp->key = key;
	temp->value = value;
	temp->next = *dict;
	*dict = temp;
	return (1);
}

int	parse_line(t_dict **dict, char *buf, int *pos)
{
	char	*key;
	char	*value;

	while (buf[*pos] == '\n')
		(*pos)++;
	if (buf[*pos] < '0' || buf[*pos] > '9')
		return (buf[*pos] == '\0');
	key = get_key(buf, pos);
	if (!(key))
		return (0);
	if (!(buf[*pos] == ':'))
	{
		free(key);
		return (0);
	}
	(*pos)++;
	value = get_value(buf, pos);
	if (!(value))
	{
		free(key);
		return (0);
	}
	if (!dict_add(dict, key, value))
		return (0);
	return (1);
}

int	dict_create(t_dict **dict, char *dict_path)
{
	char	buf[999999];
	int		fd;
	int		size;
	int		pos;

	fd = open(dict_path, O_RDONLY);
	if (fd == -1)
		return (0);
	size = read(fd, buf, sizeof(buf) - 1);
	close (fd);
	if (size <= 0)
		return (0);
	buf[size] = '\0';
	pos = 0;
	while (buf[pos])
	{
		if (!(parse_line(dict, buf, &pos)))
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	t_dict	*dict;

	dict = NULL;
	dict_create(&dict);
	while (dict)
	{
		printf("key = %s\nvalue = %s\n", dict->key, dict->value);
		dict = dict->next;
	}
	return (0);
}*/
