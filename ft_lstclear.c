/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanfred <rmanfred@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 23:46:33 by rmanfred          #+#    #+#             */
/*   Updated: 2020/05/19 16:00:41 by rmanfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*a;

	if (!lst && !del)
		return ;
	while (*lst)
	{
		a = *lst;
		(*del)(a->content);
		(*lst) = (*lst)->next;
		free(a);
	}
}
