
#include "libft.h"

static size_t	wordcount(char const *s, char c)
{
	size_t	count;
	int		last;
	size_t	i;

	count = 0;
	i = 0;
	last = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (last)
				count++;
			last = 0;
		}
		else
			last = 1;
		i++;
	}
	if (last)
		count++;
	return (count);
}

static void	cleanmemory(char **tab, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
		free(tab[i++]);
	free(tab);
}

static int	fillwordtab(char const *s, char c, size_t nwords, char **tab)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (s[i] && j < nwords)
	{
		k = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i + k] && s[i + k] != c)
			k++;
		tab[j] = malloc(k + 1);
		if (!tab[j])
			return (cleanmemory(tab, j), 0);
		k = 0;
		while (s[i] && s[i] != c)
			tab[j][k++] = s[i++];
		tab[j][k] = '\0';
		j++;
	}
	tab[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	nwords;

	if (!s)
		return (NULL);
	if (c == 0)
		nwords = 1;
	else
		nwords = wordcount(s, c);
	tab = malloc((nwords + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	tab[0] = NULL;
	if (nwords == 0)
		return (tab);
	if (!fillwordtab(s, c, nwords, tab))
		return (NULL);
	return (tab);
}
