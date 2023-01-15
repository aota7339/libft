#include"libft.h"
int	ft_isalnum(int	c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int	ft_isalnum(int	c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf ("%d\n", ft_isalnum('k'));
	printf ("%d\n", ft_isalnum('1'));
	printf ("%d\n", ft_isalnum('~'));
	return (0);
}
*/