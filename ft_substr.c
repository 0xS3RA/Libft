
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;
	size_t			reallen;

	if (!s)
		return (NULL);
	reallen = ft_strlen(s);
	if (start >= reallen)
		return (ft_strdup(""));
	reallen = 0;
	while (reallen < len && s[start + reallen])
		reallen++;
	subs = malloc((reallen + 1) * sizeof(char));
	if (!subs)
		return (NULL);
	i = 0;
	while (i < reallen)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
