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
