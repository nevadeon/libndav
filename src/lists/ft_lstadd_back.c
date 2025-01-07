#include "libndav.h"

void	ft_lstadd_back(t_list **list, t_list *new_node)
{
	if (*list == NULL)
		*list = new_node;
	else
		ft_lstlast(*list)->next = new_node;
}
