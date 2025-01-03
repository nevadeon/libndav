/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <github@noedavenne.aleaas.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:29:57 by ndavenne          #+#    #+#             */
/*   Updated: 2025/01/03 19:51:44 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

void	ft_lstiter(t_pointer_list *list, t_apply_function apply)
{
	if (apply == NULL)
		return ;
	while (list != NULL)
	{
		apply(list->content);
		list = list->next;
	}
}
