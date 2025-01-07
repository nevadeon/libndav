#include "libndav.h"

static void	_recursive(int fd, long l)
{
	if (l >= 10)
		_recursive(fd, l / 10);
	ft_dputchar(fd, l % 10 + '0');
}

void	ft_dputnbr(int fd, int n)
{
	long	l;

	l = (long) n;
	if (l < 0)
	{
		ft_dputchar(fd, '-');
		l = -l;
	}
	_recursive(fd, l);
}
