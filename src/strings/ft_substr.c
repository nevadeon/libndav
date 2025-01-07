#include "libndav.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*output;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	else if ((s_len - start) < len)
		len = s_len - start;
	output = malloc(sizeof(char) * len + 1);
	if (output == NULL)
		return ((char *) NULL);
	i = 0;
	while (s[start] && len--)
		output[i++] = s[start++];
	output[i] = '\0';
	return (output);
}
