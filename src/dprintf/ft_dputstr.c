#include "libndav.h"

size_t	ft_dputstr(int fd, const char *s)
{
	size_t	len;

	if (s == NULL)
		return (ft_dputstr(fd, "(null)"));
	len = ft_strlen(s);
	write(fd, s, len);
	return (len);
}
