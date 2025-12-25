/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvan-ach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 11:40:34 by vvan-ach          #+#    #+#             */
/*   Updated: 2025/12/17 15:31:20 by vvan-ach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(int n)
{
	long	j;
	size_t	len;

	j = (long)n;
	len = (n <= 0);
	if (j < 0)
		j = -j;
	while (j)
	{
		len++;
		j /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	len;
	long	j;

	j = (long)n;
	if (j < 0)
		j = -j;
	len = intlen(n);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	while (len-- > 0)
	{
		res[len] = (j % 10) + '0';
		j /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
