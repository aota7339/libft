
#include "libft.h"

int	ft_isalpha(int	c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*
int	ft_isalpha(int	c);

int	main(void)
{
	printf ("%d\n", ft_isalpha('k'));
	printf ("%d\n", ft_isalpha('1'));
	printf ("%d\n", ft_isalpha('~'));
	return (0);
}
*/
