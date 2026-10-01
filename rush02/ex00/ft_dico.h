/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dico.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlamy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 12:02:50 by qlamy             #+#    #+#             */
/*   Updated: 2026/09/27 18:47:49 by qlamy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICO_H
# define FT_DICO_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# define DICTERROR "error"

struct s_dict
{
	char			*key;
	char			*value;
	struct s_dict	*next;
};
typedef struct s_dict	t_dict;

int		get_max_key_size(t_dict *dict);
int		dict_create(t_dict **dict, char *dict_path);
char	*get_dict_value(char *searched, t_dict **dict);
char	*get_dict_key(int i, t_dict **dict);
int		convert_number(char *str, t_dict *dict);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	free_linkedlist(t_dict **dict);

#endif
