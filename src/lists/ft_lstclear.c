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
