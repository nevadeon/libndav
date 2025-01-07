#include "libndav.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const t_byte	*s;
	t_byte			*d;

	if (n != 0 && (dest == src))
		return (dest);
	s = (const t_byte *)src;
	d = (t_byte *)dest;
	while (n--)
		*d++ = *s++;
	return (dest);
}
