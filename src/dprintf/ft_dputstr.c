/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dputstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <github@noedavenne.aleaas.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:40:56 by ndavenne          #+#    #+#             */
/*   Updated: 2025/01/03 19:51:58 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

size_t	ft_dputstr(int fd, const char *s)
{
	size_t	len;

	if (s == NULL)
		return (ft_dputstr(fd, "(null)"));
	len = ft_strlen(s);
	write(fd, s, len);
	return (len);
}
