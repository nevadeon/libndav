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
