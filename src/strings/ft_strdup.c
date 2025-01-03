/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <github@noedavenne.aleaas.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:10:41 by ndavenne          #+#    #+#             */
/*   Updated: 2025/01/03 19:51:22 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;
	char	*cpy_o;

	cpy = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (cpy == NULL)
		return (NULL);
	cpy_o = cpy;
	while (*s != '\0')
		*cpy++ = *s++;
	*cpy = '\0';
	return (cpy_o);
}
