/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <github@noedavenne.aleaas.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:47:48 by ndavenne          #+#    #+#             */
/*   Updated: 2025/01/03 19:51:46 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

size_t	ft_lstsize(t_list *list)
{
	size_t	size;

	size = 0;
	while (list != NULL)
	{
		list = list->next;
		size++;
	}
	return (size);
}
