/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <ndavenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:53:16 by ndavenne          #+#    #+#             */
/*   Updated: 2024/04/12 19:29:57 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

static void	_recursive(long l, int fd)
{
	if (l >= 10)
		_recursive(l / 10, fd);
	ft_putchar_fd(l % 10 + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	l;

	l = (long) n;
	if (l < 0)
	{
		ft_putchar_fd('-', fd);
		l = -l;
	}
	_recursive(l, fd);
}
