/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:47:22 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/10 14:46:38 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list	*new_list;
	t_list	*pos_new;
	t_list	*pos_old;

	new_list = ft_lstnew((*f)(lst->content));
	if (!lst || !(new_list))
		return (NULL);
	pos_new = new_list;
	pos_old = lst->next;
	while (pos_old)
	{
		pos_new->next = ft_lstnew((*f)(lst->content));
		if (!(pos_new->next))
		{
			ft_lstdelone(new_list, del);
			return (NULL);
		}	
	pos_new = pos_new->next;
	pos_old = pos_old->next;
	}
	return (new_list);
}
