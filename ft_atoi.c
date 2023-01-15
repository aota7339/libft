#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t		i;
	long int	r;
	int			sign;

	i = 0;
	r = 0;
	sign = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]) != 0)
	{
		r = r * 10 + (str[i] - 48);
		i++;
	}
	if (sign == -1)
		r = -1 * r;
	return ((int)r);
}