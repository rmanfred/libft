/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanfred <rmanfred@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 21:49:39 by rmanfred          #+#    #+#             */
/*   Updated: 2020/05/18 23:20:51 by rmanfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*a;

	if (!new || !lst)
		return ;
	if (*lst)
	{
		a = *lst;
		while (a->next != NULL)
			a = a->next;
		a->next = new;
	}
	else
		*lst = new;
}
