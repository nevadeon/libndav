#include "libndav.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	while (*big && len)
	{
		i = 0;
		while (little[i] == big[i] && len)
		{
			if (little[i + 1] == '\0')
				return ((char *)big);
			len--;
			i++;
		}
		len = len + i - 1;
		big++;
	}
	return (NULL);
}
