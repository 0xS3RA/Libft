/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvan-ach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 20:11:29 by vvan-ach          #+#    #+#             */
/*   Updated: 2025/12/19 19:46:44 by vvan-ach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
