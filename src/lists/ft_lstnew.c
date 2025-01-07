#include "libndav.h"

t_pointer_list	*ft_lstnew(void *content)
{
	t_pointer_list	*new_node;

	new_node = malloc(sizeof(t_pointer_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
