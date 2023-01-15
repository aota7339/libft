
#include"libft.h"
char	*ft_strdup(const char	*s1)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1);
	if (!s1 || len == SIZE_MAX)
		return (NULL);
	str = malloc(sizeof (char) * (len + 1));
	if (str)
		ft_strlcpy(str, s1, len + 1);
	return (str);
}
