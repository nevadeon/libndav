/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <ndavenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:10:41 by ndavenne          #+#    #+#             */
/*   Updated: 2024/04/12 17:21:20 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;
	char	*cpy_p;

	cpy = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (cpy == NULL)
		return (NULL);
	cpy_p = cpy;
	while (*s != '\0')
		*cpy++ = *s++;
	*cpy = '\0';
	return (cpy_p);
}
