
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
