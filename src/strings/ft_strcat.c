#include "libndav.h"

void	ft_strcat(char *dest, const char *src)
{
	while (*dest)
		dest++;
	ft_strcpy(dest, src);
}
