/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <github@noedavenne.aleaas.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:28:47 by ndavenne          #+#    #+#             */
/*   Updated: 2025/01/03 19:51:41 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

void	ft_lstadd_back(t_list **list, t_list *new_node)
{
	if (*list == NULL)
		*list = new_node;
	else
		ft_lstlast(*list)->next = new_node;
}
