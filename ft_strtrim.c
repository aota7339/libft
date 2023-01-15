#include "libft.h"
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(s1));
	end = ft_strlen(s1);
	while (0 < end && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, 0, end));
}
