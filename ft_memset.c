#include "libft.h"
void	*ft_memset(void	*b,	int	c, size_t	len)
{
	size_t			i;
	unsigned char	*ret;

	i = 0;
	ret = (unsigned char *)b;
	while (i < len)
	{
		ret[i] = (unsigned char)c;
		i++;
	}
	return (ret);
}

/*main

int	main(void)
{
	char	n[] = "0123456789";

	ft_memset(n, '*', 5);
	printf("%s\n", n);
	return (0);
}*/
