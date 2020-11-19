/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanfred <rmanfred@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 22:28:16 by rmanfred          #+#    #+#             */
/*   Updated: 2020/05/16 22:33:39 by rmanfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*push;
	t_list	*before;

	if (!lst || !f)
		return (NULL);
	if (!(push = ft_lstnew(f(lst->content))))
		return (NULL);
	before = push;
	while (lst->next != NULL)
	{
		lst = lst->next;
		if (!(push->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&before, del);
			return (NULL);
		}
		push = push->next;
	}
	return (before);
}
