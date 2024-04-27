/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevadeon <nevadeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:09:48 by ndavenne          #+#    #+#             */
/*   Updated: 2024/04/22 23:18:37 by nevadeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

size_t	ft_strclen(const char *str, char c, bool include)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (include == true && str[i] == c)
		i++;
	return (i);
}
