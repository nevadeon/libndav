#include "libndav.h"

void	ft_dputendl(int fd, const char *s)
{
	size_t	len;

	len = ft_strlen(s);
	write(fd, s, len);
	ft_dputchar(fd, '\n');
}
