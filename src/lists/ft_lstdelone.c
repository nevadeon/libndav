/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <github@noedavenne.aleaas.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:45:23 by ndavenne          #+#    #+#             */
/*   Updated: 2025/01/03 19:51:44 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

void	ft_lstdelone(t_pointer_list *list, t_delete_function delete)
{
	if (list == NULL && delete == NULL)
		return ;
	delete(list->content);
	free(list);
}
