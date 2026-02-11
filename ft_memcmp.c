
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*q;

	if (n == 0)
		return (0);
	p = (unsigned char *)s1;
	q = (unsigned char *)s2;
	i = 0;
	while (i < n - 1 && p[i] == q[i])
		i++;
	return (p[i] - q[i]);
}
