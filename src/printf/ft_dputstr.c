/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dputstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <ndavenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:24:32 by ndavenne          #+#    #+#             */
/*   Updated: 2024/04/12 19:17:21 by ndavenne         ###   ########.fr       */
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
