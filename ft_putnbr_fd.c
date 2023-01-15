#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	un;

	un = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		un = (unsigned) ~ n + 1;
	}
	if (un > 9)
	{
		ft_putnbr_fd(un / 10, fd);
	}
	ft_putchar_fd((un % 10) + '0', fd);
}
/*
int main()
{
    int    n = 0;
    ft_putnbr_fd(n, 1);
    return (0);
}*/