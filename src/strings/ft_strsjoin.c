#include "libndav.h"

char	*ft_strsjoin(int n, ...)
{
	char	*joined;
	va_list	args;
	size_t	len;
	int		i;

	if (n <= 0)
		return (NULL);
	va_start(args, n);
	len = 0;
	i = -1;
	while (++i < n)
		len += ft_strlen(va_arg(args, char *));
	joined = ft_arena_alloc((len + 1) * sizeof(char));
	va_end(args);
	if (joined == NULL)
		return (NULL);
	joined[0] = '\0';
	va_start(args, n);
	i = -1;
	while (++i < n)
		ft_strcat(joined, va_arg(args, char *));
	joined[len] = '\0';
	va_end(args);
	return (joined);
}
