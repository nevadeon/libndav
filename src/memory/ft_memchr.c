#include "libndav.h"

void	*ft_memchr(const void *s, t_byte b, size_t n)
{
	t_byte	*ptr;

	ptr = (t_byte *) s;
	while (n--)
	{
		if (*ptr == b)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
