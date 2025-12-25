/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvan-ach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 21:15:59 by vvan-ach          #+#    #+#             */
/*   Updated: 2025/12/19 20:19:23 by vvan-ach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*temp;
	void	*content;

	if (!f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (ft_lstclear(&newlst, del), NULL);
		temp = malloc(sizeof(t_list));
		if (!temp)
		{
			del(content);
			return (ft_lstclear(&newlst, del), NULL);
		}
		temp->next = NULL;
		temp->content = content;
		ft_lstadd_back(&newlst, temp);
		lst = lst->next;
	}
	return (newlst);
}
