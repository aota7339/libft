#include"libft.h"
size_t	ft_strlcat(char	*dst, const char	*src, size_t	destsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (destsize == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (destsize <= dst_len)
		return (destsize + src_len);
	i = 0;
	while (src[i] && (i < (destsize - dst_len - 1)))
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
//int main(void)
//{
//	char dest[30]; memset(dest, 0, 30);
//	char * src = (char *)"AAAAAAAAA";
//	dest[0] = 'B';
//	/* 1 */ ft_strlcat(dest, src, 0);
//	printf("%s\n",dest);
//
//	dest[0] = 'B';
//	/* 2 */ ft_strlcat(dest, src, 1);
//	printf("%s\n",dest);
//
//	memset(dest, 'B', 4);
//	/* 3 */ ft_strlcat(dest, src, 3);
//	printf("%s\n",dest);
//	
//	/* 4 */ ft_strlcat(dest, src, 6);
//	printf("%s\n",dest);
//
//	memset(dest, 'C', 5);
//	/* 5 */ ft_strlcat(dest, src, -1);
//	printf("%s\n",dest);
//
//	memset(dest, 'C', 15);
//	/* 6 */ ft_strlcat(dest, src, 17);
//	printf("%s\n",dest);
//
//	memset(dest, 0, 30);
//	/* 7 */ ft_strlcat(dest, src, 1);
//	printf("%s\n",dest);
//
//	memset(dest, 0, 30); memset(dest, '1', 10);
//	/* 8 */ ft_strlcat(dest, src, 5);
//	printf("%s\n",dest);
//
//	memset(dest, 0, 30); memset(dest, '1', 10);
//	/* 9 */ ft_strlcat(dest, src, 5);
//	printf("%s\n",dest);
//
//	memset(dest, 0, 30); memset(dest, '1', 10);
//	/* 10 */ ft_strlcat(dest, "", 15);
//	printf("%s\n",dest);
//
//	memset(dest, 0, 30);
//	/* 11 */ ft_strlcat(dest, "", 42);
//	printf("%s\n",dest);
//
//	memset(dest, 0, 30);
//	/* 12 */ ft_strlcat(dest, "", 0);
//	printf("%s\n",dest);
//
//	memset(dest, 0, 30);
//	/* 13 */ ft_strlcat(dest, "123", 1);
//	printf("%s\n",dest);
//
//	memset(dest, 0, 30);
//	/* 14 */ ft_strlcat(dest, "123", 2);
//	printf("%s\n",dest);
//
//	memset(dest, 0, 30);
//	/* 15 */ ft_strlcat(dest, "123", 3);
//	printf("%s\n",dest);
//
//	memset(dest, 0, 30);
//	/* 16 */ ft_strlcat(dest, "123", 4);
//	printf("%s\n",dest);
//
//	memset(dest, 0, 30);
//	/* 17 */ ft_strlcat(dest, "123", 0);
//	printf("%s\n",dest);
//	write(1, "\n", 1);
//	return (0);
//}
