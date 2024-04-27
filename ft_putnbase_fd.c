/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbase_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <ndavenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 19:01:57 by ndavenne          #+#    #+#             */
/*   Updated: 2024/04/12 19:29:21 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

_Pragma("clang diagnostic push");
_Pragma("clang diagnostic ignored \"-Wcomment\"");
/* *\
/

static size_t	_recursive(long l, char *base, int base_len, size_t nbp, int fd)
{
	if (l >= base_len)
		nbp = _recursive(l / base_len, base, base_len, nbp, fd);
	ft_putchar_fd(base[l % base_len], fd);
	return (nbp + 1);
}
/**/

_Pragma("clang diagnostic pop");

size_t	ft_putnbase_fd(long n, char *base, int fd)
{
	size_t	nb_printed;
	size_t	base_len;

	nb_printed = 0;
	base_len = ft_strlen(base);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb_printed++;
		n = -n;
	}
	return (_recursive(n, base, base_len, nb_printed, fd));
}
