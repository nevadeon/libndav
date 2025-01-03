/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <github@noedavenne.aleaas.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:39:33 by ndavenne          #+#    #+#             */
/*   Updated: 2025/01/03 19:51:42 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

void	ft_lstclear(t_pointer_list **list, t_delete_function delete)
{
	t_pointer_list	*node;
	t_pointer_list	*temp;

	if (list == NULL || delete == NULL)
		return ;
	node = *(list);
	while (node != NULL)
	{
		delete(node->content);
		temp = node->next;
		free(node);
		node = temp;
	}
	*list = NULL;
}
