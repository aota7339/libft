
#include "libft.h"

static int	ft_nbrlen(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size += 1;
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int	n)
{
	int				size;
	char			*str;
	unsigned int	un;

	size = ft_nbrlen(n);
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	str[size--] = '\0';
	un = n;
	if (n == 0)
		str[size] = '0';
	if (n < 0)
	{
		str[0] = '-';
		un = (unsigned) ~ n + 1;
	}
	while (un)
	{
		str[size--] = (un % 10) + '0';
		un = un / 10;
	}
	return (str);
}

/*
int    main(void)
{
    int  i;
    char*   c;

    i = INT_MIN;
    while (i)
    {
        printf("%d ", ft_nbrlen(i));
        printf("%s\n", c = ft_itoa(i));
        i = i / 10;
        free(c);
    }
}
*/
