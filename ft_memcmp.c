/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanfred <rmanfred@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 22:07:20 by rmanfred          #+#    #+#             */
/*   Updated: 2020/05/16 16:09:06 by rmanfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s_n1;
	unsigned char	*s_n2;

	s_n1 = (unsigned char *)s1;
	s_n2 = (unsigned char *)s2;
	while (n--)
	{
		if (*s_n1 != *s_n2)
			return (*s_n1 - *s_n2);
		s_n1++;
		s_n2++;
	}
	return (0);
}
