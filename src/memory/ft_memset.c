/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <ndavenne@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:59:33 by ndavenne          #+#    #+#             */
/*   Updated: 2024/10/24 20:21:14 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

void	*ft_memset(void *s, int c, int n)
{
	t_byte	*ptr;

	ptr = (t_byte *)s;
	while (n--)
		*ptr++ = (t_byte)c;
	return (s);
}
