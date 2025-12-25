/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvan-ach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 20:06:10 by vvan-ach          #+#    #+#             */
/*   Updated: 2025/12/19 19:42:47 by vvan-ach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
