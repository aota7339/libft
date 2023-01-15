#include "libft.h"
int	ft_memcmp(const void	*buf1, const void *buf2, size_t n)
{
	const unsigned char	*b1;
	const unsigned char	*b2;
	size_t				i;

	b1 = (const unsigned char *)buf1;
	b2 = (const unsigned char *)buf2;
	i = 0;
	while (i < n)
	{
		if (b1[i] != b2[i])
			return (b1[i] - b2[i]);
		i++;
	}
	return (0);
}
