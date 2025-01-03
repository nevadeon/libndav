/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dputendl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <github@noedavenne.aleaas.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:43:15 by ndavenne          #+#    #+#             */
/*   Updated: 2025/01/03 19:51:53 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

void	ft_dputendl(int fd, const char *s)
{
	size_t	len;

	len = ft_strlen(s);
	write(fd, s, len);
	ft_dputchar(fd, '\n');
}
