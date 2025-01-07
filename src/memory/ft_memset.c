#include "libndav.h"

void	*ft_memset(void *s, t_byte b, int n)
{
	t_byte	*ptr;

	ptr = (t_byte *)s;
	while (n--)
		*ptr++ = b;
	return (s);
}
