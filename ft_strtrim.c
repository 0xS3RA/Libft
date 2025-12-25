/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvan-ach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:41:06 by vvan-ach          #+#    #+#             */
/*   Updated: 2025/12/18 20:14:57 by vvan-ach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	rightindex;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (i == len)
		return (ft_strdup(""));
	rightindex = len - 1;
	while (rightindex >= i && ft_strchr(set, s1[rightindex]))
		rightindex--;
	res = malloc(((rightindex - i + 1) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	j = 0;
	while (i <= rightindex)
		res[j++] = s1[i++];
	res[j] = '\0';
	return (res);
}
