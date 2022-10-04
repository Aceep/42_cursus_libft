#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list	*new_list;
	t_list	*pos_new;
	t_list	*pos_old;

	if (!lst || !(new_list = ft_lstnew((*f)(lst->content))))
		return (NULL);
	pos_new = new_list;
	pos_old = lst->next;
	while (pos_old)
	{
		if (!(pos_new->next = ft_lstnew((*f)(lst->content))))
		{
			ft_lstdelone(new_list, del);
			return (NULL);
		}	
	pos_new = pos_new->next;
	pos_old = pos_old->next;
	}
	return (new_list);
}
