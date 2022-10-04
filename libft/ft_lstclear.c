#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void
*))
{
	t_list	*position;

	if (!lst)
		return ;
	position = (*lst)->next;
	while (position)
	{
		position = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = position;
	}
}
