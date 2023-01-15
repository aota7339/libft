
#include "libft.h"
void	*ft_memcpy(void	*dst, const void	*src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = dst;
	s = src;
	i = 0;
	if (dst == src)
		return (d);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/*
int	main(void)
{
	char	i[] = "0123456789";
	char	j[] = "abcdefghij";
	char	k[] = "a";

	ft_memcpy(i, j, 5);
	printf("%s\n", i);
	ft_memcpy(i, k, 5);
	printf("%s\n", i);
	return (0);
}*/
