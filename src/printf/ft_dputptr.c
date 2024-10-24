/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dputptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <ndavenne@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:25:12 by ndavenne          #+#    #+#             */
/*   Updated: 2024/10/24 19:46:12 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

size_t	ft_dputptr(int fd, void *p)
{
	if (p == NULL)
		return (ft_dputstr(fd, "(nil)"));
	ft_dputstr(fd, "0x");
	return (ft_dputulbase(fd, (size_t) p, HEXA_LOW) + 2);
}
