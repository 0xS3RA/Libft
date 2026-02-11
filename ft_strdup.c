
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*copied;

	i = 0;
	while (s[i])
		i++;
	copied = malloc((i + 1) * sizeof(char));
	if (!copied)
		return (NULL);
	i = 0;
	while (s[i])
	{
		copied[i] = s[i];
		i++;
	}
	copied[i] = '\0';
	return (copied);
}
