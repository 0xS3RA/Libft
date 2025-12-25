/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvan-ach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 21:12:37 by vvan-ach          #+#    #+#             */
/*   Updated: 2025/12/13 22:01:33 by vvan-ach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allouer Size_t par Size_t pour aller plus vite
// sizeof(size_t) == 8 bytes/octet sur x64 et 4 sur x32
// Ensuite allouer les bytes manquants
// sizeof(unsigned char) == 1 byte/octet

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			*res;
	unsigned char	*res_rest;
	size_t			i;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size > ((size_t) - 1 / nmemb))
		return (NULL);
	res = (size_t *)malloc(size * nmemb);
	if (!res)
		return (NULL);
	i = 0;
	while (i < (nmemb * size) / sizeof(size_t))
		res[i++] = 0;
	res_rest = (unsigned char *)(res + i);
	i = 0;
	while (i < (nmemb * size) % sizeof(size_t))
		res_rest[i++] = 0;
	return ((void *)res);
}
