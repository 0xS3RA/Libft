
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	uc;
	size_t			i;

	i = 0;
	uc = (unsigned char)c;
	while (str[i])
	{
		if ((unsigned char)str[i] == uc)
			return ((char *)&str[i]);
		i++;
	}
	if (uc == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
