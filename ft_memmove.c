/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanfred <rmanfred@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 18:16:52 by rmanfred          #+#    #+#             */
/*   Updated: 2020/05/18 22:31:16 by rmanfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (!dest && !src)
		return (0);
	if (s < d)
	{
		while (++i <= n)
			d[n - i] = s[n - i];
	}
	else
	{
		while (n--)
			*(d++) = *(s++);
	}
	return (dest);
}
