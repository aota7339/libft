
#include "libft.h"
char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	char			*new_str;
	unsigned int	i;
	size_t			slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s) + 1;
	if (start > slen || len == 0)
		return (ft_strdup(""));
	if (len > slen - start - 1)
		len = slen - start - 1;
	new_str = ft_calloc(len + 1, sizeof (char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (len - i && s[i + start] != '\0')
	{
		new_str[i] = s[i + start];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*
	nlen = (ft_strlen(s) + 1) - start;
	if (nlen > len)
		new_str = ft_calloc((len + 1), sizeof(char));
	else
		new_str = ft_calloc(nlen, sizeof(char));
	if (!new_str)
		return NULL;

char	main(void)
{
	char			*s;
	unsigned int	i; 
	size_t			len;

	s = "HelloWorld";
	i = 0;
	len = 0;
	printf ("%s\n", ft_substr(s, i, len));
	return (0);
}*/
