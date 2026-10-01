/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pkg_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlamy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 12:02:50 by qlamy             #+#    #+#             */
/*   Updated: 2026/09/27 19:35:56 by aivaucan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PKG_UTILS_H
# define FT_PKG_UTILS_H
# include "ft_str_utils.h"
# include "ft_dico.h"

char	*get_pkg_type(int zeros, t_dict *dict);
char	*get_val(char *str, int str_size, t_dict *dict);
int		convert_pkg(char *str, int pkg_size, int pkg_type, t_dict *dict);
int		get_pkg_size(int size);
void	put_pkg(char *nbr, char *pkg[5], int pkg_type, int max_i);

#endif
