/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <github@noedavenne.aleaas.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:48:59 by ndavenne          #+#    #+#             */
/*   Updated: 2025/01/03 19:51:31 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed;
	size_t	len;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len - 1]))
		len--;
	trimed = malloc(sizeof(char) * (len + 1));
	if (trimed == NULL)
		return (NULL);
	ft_memcpy(trimed, s1, len);
	trimed[len] = '\0';
	return (trimed);
}
