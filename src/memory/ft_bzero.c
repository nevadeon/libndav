#include "libndav.h"

void	ft_bzero(void *s, size_t n)
{
	t_byte	*ptr;

	ptr = (t_byte *)s;
	while (n--)
		*ptr++ = (t_byte) '\0';
}
