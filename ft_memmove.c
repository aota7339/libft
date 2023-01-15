
#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	len)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		*d2;
	const unsigned char	*s2;

	s = src;
	d = dst;
	if (len == 0)
		return (dst);
	else if (dst == src)
		return (d);
	else if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d2 = (d + (len - 1));
		s2 = (s + (len - 1));
		while (len--)
			*d2-- = *s2--;
	}
	return (dst);
}
/*
int	main(void)
{
	char	i[] = "012345";
	char	j[] = "abcdef";
	char	k[] = "012345";

	ft_memmove(i, j, 3);
	printf("%s\n", i);
	ft_memmove(i, k, 6);
	printf("%s\n", i);
	return (0);
}*/
