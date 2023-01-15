#include"libft.h"
int	ft_tolower(int	c)
{
	int	i;

	if (c >= 65 && c <= 90)
	{
		i = (c + 32);
		return (i);
	}
	else
		return (c);
}
/*
int	ft_tolower(int	c);
int main(void)
{
	printf("%c\n", ft_tolower('O'));
	printf("%c\n", ft_tolower('k'));
	printf("%c\n", ft_tolower('2'));
	printf("%c\n", ft_tolower('~'));
	return (0);
}
*/