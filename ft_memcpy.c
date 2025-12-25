/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvan-ach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 20:39:11 by vvan-ach          #+#    #+#             */
/*   Updated: 2025/12/18 02:45:12 by vvan-ach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*q;

	q = (unsigned char *)dest;
	p = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		q[i] = p[i];
		i++;
	}
	return (dest);
}
