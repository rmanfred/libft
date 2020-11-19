/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanfred <rmanfred@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:05:04 by rmanfred          #+#    #+#             */
/*   Updated: 2020/05/19 16:55:53 by rmanfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (dst[i] && i < size)
		i++;
	len = ft_strlen(src) + i;
	if (i < size)
	{
		while (*src && (i < size - 1))
		{
			dst[i] = *src++;
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
