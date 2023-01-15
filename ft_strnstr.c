#include "libft.h"
#include <string.h>
char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t	i;
	size_t	nlen;

	nlen = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	else if (len == 0)
		return (NULL);
	i = 0;
	while (haystack[i] != '\0')
	{
		if ((ft_strncmp(needle, &haystack[i], nlen) == 0) && (i + nlen <= len))
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	printf("%s\n", "abc");
	printf("%s\n", ft_strnstr("gh", "abcdefgh", 100));
	return (0);
}*/