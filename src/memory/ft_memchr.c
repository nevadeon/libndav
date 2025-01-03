/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <github@noedavenne.aleaas.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:16:51 by ndavenne          #+#    #+#             */
/*   Updated: 2025/01/03 19:51:04 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

void	*ft_memchr(const void *s, t_byte b, size_t n)
{
	t_byte	*ptr;

	ptr = (t_byte *) s;
	while (n--)
	{
		if (*ptr == b)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
