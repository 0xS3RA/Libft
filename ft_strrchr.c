
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	uc;
	char			*lastfound;

	lastfound = NULL;
	uc = (unsigned char)c;
	while (*str)
	{
		if ((unsigned char)*str == uc)
			lastfound = (char *)str;
		str++;
	}
	if (uc == '\0')
		return ((char *)str);
	return (lastfound);
}
