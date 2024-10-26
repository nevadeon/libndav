/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_block_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <github@noedavenne.aleaas.coms    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:55:49 by ndavenne          #+#    #+#             */
/*   Updated: 2024/10/27 00:25:50 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

void	*ft_block_alloc(size_t size)
{
	static t_byte	ptr[ARENA_BLOCK_SIZE] = {0};
	static size_t	pos = 0;

	if (pos + size > ARENA_BLOCK_SIZE)
		return (NULL);
	pos += size;
	return (ptr + pos - size);
}
