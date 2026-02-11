
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;

	if (little[0] == '\0')
		return ((char *)big);
	len = 0;
	while (little[len])
		len++;
	i = 0;
	while (i < n && big[i])
	{
		j = 0;
		while ((i + j) < n && big[i + j] == little[j])
			j++;
		if (j == len)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
