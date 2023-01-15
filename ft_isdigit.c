
#include "libft.h"
int	ft_isdigit(int	c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*
int	ft_isdigit(int	c);

int	main(void)
{
	printf ("%d\n", ft_isdigit('2'));
	printf ("%d\n", ft_isdigit('k'));
	printf ("%d\n", ft_isdigit('~'));
	return (0);
}
*/
