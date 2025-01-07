#include "libndav.h"

void	*ft_arena_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = ft_arena_alloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
