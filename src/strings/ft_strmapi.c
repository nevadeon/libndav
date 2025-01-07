#include "libndav.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*out;
	unsigned int	i;

	out = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (out == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		out[i] = f(i, s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}
