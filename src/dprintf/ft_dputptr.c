#include "libndav.h"

size_t	ft_dputptr(int fd, void *p)
{
	if (p == NULL)
		return (ft_dputstr(fd, "(nil)"));
	ft_dputstr(fd, "0x");
	return (ft_dputulbase(fd, (size_t) p, HEXA_LOW) + 2);
}
