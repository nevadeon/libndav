/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <github@noedavenne.aleaas.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:35:42 by ndavenne          #+#    #+#             */
/*   Updated: 2025/01/03 19:51:26 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

int	ft_strlcpy(char *dest, const char *src, size_t d_size)
{
	const char	*src_o;
	size_t		len;

	src_o = src;
	len = d_size;
	if (len != 0)
	{
		while (--len && *src)
			*dest++ = *src++;
		*dest = '\0';
	}
	if (len == 0)
	{
		if (d_size != 0)
			*dest = '\0';
		while (*src)
			src++;
	}
	return (src - src_o);
}
