#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			*res;
	unsigned char	*res_rest;
	size_t			i;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size > ((size_t) - 1 / nmemb))
		return (NULL);
	res = (size_t *)malloc(size * nmemb);
	if (!res)
		return (NULL);
	i = 0;
	while (i < (nmemb * size) / sizeof(size_t))
		res[i++] = 0;
	res_rest = (unsigned char *)(res + i);
	i = 0;
	while (i < (nmemb * size) % sizeof(size_t))
		res_rest[i++] = 0;
	return ((void *)res);
}
