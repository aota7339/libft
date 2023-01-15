#include "libft.h"
void	ft_bzero(void	*s, size_t	n)
{
	size_t	i;
	char	*y;

	i = 0;
	y = s;
	while (i < n)
	{
		y[i] = 0;
		i++;
	}
}

/*main
int	main(void)
{
	char	b[] = "0123456789";

	ft_bzero(b, 5);
	printf("%s\n", b);
	return (0);
}*/
