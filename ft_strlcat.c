
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	if (!dest || !src)
		return (0);
	destlen = 0;
	srclen = 0;
	while (destlen < size && dest[destlen])
		destlen++;
	while (src[srclen])
		srclen++;
	if (size <= destlen)
		return (size + srclen);
	i = 0;
	while ((destlen + i) < size - 1 && src[i])
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
