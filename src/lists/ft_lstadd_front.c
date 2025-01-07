#include "libndav.h"

void	ft_lstadd_front(t_list **list, t_list *new_node)
{
	if (*list != NULL)
		new_node->next = *list;
	*list = new_node;
}
