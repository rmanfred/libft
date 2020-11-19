/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanfred <rmanfred@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 11:00:02 by rmanfred          #+#    #+#             */
/*   Updated: 2020/05/18 23:08:18 by rmanfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	n;
	size_t	i;

	i = 0;
	if (!*to_find)
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		n = 0;
		if (str[i] == to_find[n])
		{
			while (str[i + n] == to_find[n] && to_find[n] != '\0'
					&& ((i + n) < len))
				n++;
			if (to_find[n] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
