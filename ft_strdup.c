/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvan-ach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 21:44:43 by vvan-ach          #+#    #+#             */
/*   Updated: 2025/12/18 19:03:20 by vvan-ach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
