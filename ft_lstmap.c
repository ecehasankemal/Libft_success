#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
		t_list	*result;
		t_list	*node;

		if (!lst)
				return (NULL);
		result = 0;
	if (!lst)
