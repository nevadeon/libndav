#include "libndav.h"

char	*ft_itoa(int n)
{
	char	*output;
	long	n_long;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	n_long = (long) n * ((n >= 0) * 2 - 1);
	len = n < 0;
	while (n_long > 0)
	{
		n_long /= 10;
		len++;
	}
	output = malloc(sizeof(char) * (len + 1));
	if (output == NULL)
		return (NULL);
	output[len--] = '\0';
	output[0] = '-';
	n_long = (long) n * ((n >= 0) * 2 - 1);
	while (n_long > 0)
	{
		output[len--] = (n_long % 10 + '0');
		n_long /= 10;
	}
	return (output);
}
