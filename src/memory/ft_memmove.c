#include "libndav.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const t_byte	*s;
	t_byte			*d;

	if (n != 0 && (dest == src))
		return (dest);
	if (src > dest)
		return (ft_memcpy(dest, src, n));
	s = (const t_byte *)src;
	d = (t_byte *)dest;
	while (n--)
		d[n] = s[n];
	return (dest);
}
