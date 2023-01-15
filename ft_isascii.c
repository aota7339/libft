#include "libft.h"
int	ft_isascii(int	c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	ft_isascii(int	c);

int	main(void)
{
	printf ("%d\n", ft_isascii(2));
	printf ("%d\n", ft_isascii(127));
	printf ("%d\n", ft_isascii(1222));
	return (0);
}
*/
