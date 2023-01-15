
#include "libft.h"
size_t	ft_strlcpy(char	*dst, const char	*src, size_t	destsize)
{
	size_t	i;

	i = 0;
	if (destsize == 0)
		return (ft_strlen(src));
	while (i + 1 < destsize && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	dest[11]; dest[10] = '\0';

   	memset(dest, 'A', 10);
	char	src[] = "coucou";

	ft_strlcpy(dest, src , 0);
	printf("%s\n", dest);

	memset(dest, 'A', 10);
	strlcpy(dest, src, 0);
	printf("%s\n", dest);

	memset(dest, 'A', 10);
	ft_strlcpy(dest, src , 1);
	printf("%s\n", dest);

	memset(dest, 'A', 10);    
	strlcpy(dest, src, 1);
	printf("%s\n", dest);

	memset(dest, 'A', 10);
	ft_strlcpy(dest, src , 4);
	printf("%s\n", dest);

	memset(dest, 'A', 10);     
	strlcpy(dest, src, 4);
	printf("%s\n", dest);

	memset(dest, 'A', 10);
	ft_strlcpy(dest, src, 5);
	printf("%s\n", dest);

	memset(dest, 'A', 10);
	strlcpy(dest, src, 5);
	printf("%s\n", dest);
	return (0);
}
*/
