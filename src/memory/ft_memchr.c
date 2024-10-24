/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <ndavenne@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:16:51 by ndavenne          #+#    #+#             */
/*   Updated: 2024/10/24 20:19:23 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	t_byte	*ptr;

	ptr = (t_byte *) s;
	while (n--)
	{
		if (*ptr == (t_byte) c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
