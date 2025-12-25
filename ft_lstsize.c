/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvan-ach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:28:01 by vvan-ach          #+#    #+#             */
/*   Updated: 2025/12/19 00:00:45 by vvan-ach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*tmp;

	if (!lst)
		return (0);
	size = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
