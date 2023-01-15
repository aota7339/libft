#include "libft.h"
int	ft_isprint(int	c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*
int	ft_isprint(int	c);

int	main(void)
{
	printf ("%d\n", ft_isprint(32));
	printf ("%d\n", ft_isprint(100));
	printf ("%d\n", ft_isprint(127));
	return (0);
}
*/
