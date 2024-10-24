/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dputendl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <ndavenne@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:43:15 by ndavenne          #+#    #+#             */
/*   Updated: 2024/10/24 19:57:45 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

void	ft_dputendl(int fd, char *s)
{
	size_t	len;

	len = ft_strlen(s);
	write(fd, s, len);
	ft_dputchar(fd, '\n');
}
