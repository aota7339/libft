#include "libft.h"
static	size_t	ele_count(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[j] == c && s[j] != '\0')
		j++;
	while (s[j] != '\0')
	{
		while (s[j] != c && s[j] != '\0')
			j++;
		i++;
		while (s[j] == c && c != '\0')
			j++;
	}
	return (i + 1);
}

static char	*substr(char const	*s, size_t	start, size_t	len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	new_str = ft_calloc((len + 1), sizeof (char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < start && s[i])
		i++;
	j = 0;
	while (len-- && s[i])
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}

static char	*ele_create(char const	*s, char	c, size_t	*start)
{
	char	*str;
	size_t	count;

	count = 0;
	while (s[*start] == c)
		(*start)++;
	while (s[*start + count] != c && s[*start + count] != '\0')
		count++;
	str = substr(s, *start, count);
	*start = (*start + count);
	return (str);
}

static char	**split_free(char	**sp, size_t	n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		free(sp[i]);
		i++;
	}
	free(sp);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**sp;
	size_t	start;
	size_t	i;
	size_t	elecount;

	elecount = ele_count(s, c);
	sp = (char **)malloc(sizeof (char *) * elecount);
	if (sp == NULL)
		return (NULL);
	start = 0;
	i = 0;
	while (i + 1 < elecount)
	{
		sp[i] = ele_create(s, c, &start);
		if (sp[i] == NULL)
			return (split_free(sp, i));
		i++;
	}
	sp[i] = NULL;
	return (sp);
}
/*
char main()
{
	char *s;
	char c;
	char **ele;
	size_t i;

	s = "  ABA  BB C DD  ";
	c = ' ';
	i = 0;
	ele = ft_split(s, c);
	while (ele[i] != NULL)
	{
		printf("%s\n", ele[i]);
		i++;
	}
	return (0);
}*/
