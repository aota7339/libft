
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL || fd < 0)
		return ;
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}
/*
{
	ft_putstr_fd(s, fd)
	ft_putchar_fd("\n", fd)
}
*/