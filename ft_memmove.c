/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <ndavenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:10:52 by ndavenne          #+#    #+#             */
/*   Updated: 2024/04/12 17:21:20 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

void	*ft_memmove(void *dest, const void *src, int n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (n != 0 && (dest == src))
		return (dest);
	if (src > dest)
		return (ft_memcpy(dest, src, n));
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	while (n--)
		d[n] = s[n];
	return (dest);
}
