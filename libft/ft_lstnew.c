#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new;
	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);

}

/*int	main(void)
{
	char *data = "I'm a data !";
	ft_lstnew(data);
}*/
