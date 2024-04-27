/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevadeon <nevadeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 19:11:28 by ndavenne          #+#    #+#             */
/*   Updated: 2024/04/20 05:05:21 by nevadeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

static size_t	_printarg(char c, va_list args, int fd)
{
	if (c == 'c')
		return (ft_putchar_fd((unsigned char) va_arg(args, int), fd));
	else if (c == 's')
		return (ft_putstr_fd(va_arg(args, char *), fd));
	else if (c == 'p')
		return (ft_putptr_fd(va_arg(args, void *), fd));
	else if (c == 'd' || c == 'i')
		return (ft_putlbase_fd((long) va_arg(args, int), DEC, fd));
	else if (c == 'u')
		return (ft_putulbase_fd((size_t) va_arg(args, t_uint), DEC, fd));
	else if (c == 'x')
		return (ft_putulbase_fd((size_t) va_arg(args, t_uint), HEXA_LOW, fd));
	else if (c == 'X')
		return (ft_putulbase_fd((size_t) va_arg(args, t_uint), HEXA_UPP, fd));
	else if (c == '%')
		return (ft_putchar_fd('%', fd));
	return (ft_printf(fd, "%%%c", c));
}

size_t	ft_printf(int fd, const char *format, ...)
{
	va_list	args;
	size_t	nb_printed;

	nb_printed = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
			nb_printed += _printarg(*(++format), args, fd);
		else
			nb_printed += ft_putchar_fd(*format, fd);
		format++;
	}
	va_end(args);
	return (nb_printed);
}
