/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dputlbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <github@noedavenne.aleaas.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 19:01:57 by ndavenne          #+#    #+#             */
/*   Updated: 2025/01/03 19:51:55 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

static size_t	_recursive(int fd, size_t l, char *base, size_t base_len)
{
	size_t	nb_printed;

	nb_printed = 0;
	if (l >= base_len)
		nb_printed = _recursive(fd, l / base_len, base, base_len);
	ft_dputchar(fd, base[l % base_len]);
	return (nb_printed + 1);
}

size_t	ft_dputlbase(int fd, long l, char *base)
{
	size_t	base_len;

	base_len = ft_strlen(base);
	if (l < 0)
	{
		ft_dputchar(fd, '-');
		l *= -1;
		return (_recursive(fd, (size_t) l, base, base_len) + 1);
	}
	return (_recursive(fd, (size_t) l, base, base_len));
}
