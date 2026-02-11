
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	lens1;
	size_t	lens2;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	res = malloc(((lens1 + lens2) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < (lens1 + lens2))
	{
		if (i < lens1)
			res[i] = s1[i];
		else
			res[i] = s2[i - lens1];
		i++;
	}
	res[i] = '\0';
	return (res);
}
