#include "libndav.h"

void	ft_lstdelone(t_pointer_list *list, t_delete_function delete)
{
	if (list == NULL && delete == NULL)
		return ;
	delete(list->content);
	free(list);
}
