/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dputptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <github@noedavenne.aleaas.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:25:12 by ndavenne          #+#    #+#             */
/*   Updated: 2025/01/03 19:51:57 by ndavenne         ###   ########.fr       */
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
