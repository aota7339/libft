#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2));
	join = ft_calloc((len + 1), sizeof(char));
	if (!join)
		return (NULL);
	ft_memcpy(join, s1, ft_strlen(s1));
	ft_strlcat(join, s2, len + 1);
	return (join);
}
/*
char	main(void)
{
	char *s1;
	char *s2;

	s1 = "Hello";
	s2 = "World";
	printf("%s\n", ft_strjoin(s1, s2));
}*/
