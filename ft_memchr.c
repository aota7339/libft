#include "libft.h"
void	*ft_memchr(const void	*s, int	c, size_t	n)
{
	unsigned char		*a;
	unsigned char		c2;
	size_t				i;

	c2 = c;
	a = (unsigned char *)s;
	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (a[i] == c2)
			return ((void *) & a[i]);
		i++;
	}
	return (NULL);
}

/*
int main(void)
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	printf("%p\n", ft_memchr(s, 2 + 256, 3));
	printf("%p\n", memchr(s, 2 + 256, 3));
	return (0);
}
*/