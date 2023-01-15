#include "libft.h"
int	ft_toupper(int	c)
{
	int	i;

	if (c >= 'a' && c <= 'z')
	{
		i = (c - 32);
		return (i);
	}
	else
		return (c);
}

/*
 * int    ft_toupper(int   c);
int main(void)
{
	printf ("%c\n", ft_toupper('k'));
	printf ("%c\n", ft_toupper('1'));
	printf ("%c\n", ft_toupper('~'));
	return (0);
}*/
