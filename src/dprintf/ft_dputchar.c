#include "libndav.h"

size_t	ft_dputchar(int fd, char c)
{
	write(fd, &c, 1);
	return (1);
}
