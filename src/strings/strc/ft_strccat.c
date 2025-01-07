#include "libndav.h"

void	ft_strccat(char *dest, const char *src, char c, bool include_char)
{
	while (*dest)
		dest++;
	while (*src && *src != c)
		*dest++ = *src++;
	if (include_char == true && *src == c)
		*dest++ = *src++;
	*dest = '\0';
}
