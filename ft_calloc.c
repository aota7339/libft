#include "libft.h"
void	*ft_calloc(size_t	n, size_t	size)
{
	char	*a;
	size_t	len;

	if (n && size > SIZE_MAX / n)
		return (NULL);
	len = size * n;
	if (len == 0)
		len = 1;
	a = malloc(len);
	if (a)
		ft_bzero(a, len);
	return (a);
}
