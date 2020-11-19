/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanfred <rmanfred@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 10:47:27 by rmanfred          #+#    #+#             */
/*   Updated: 2020/05/19 17:00:53 by rmanfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*res1;
	unsigned char	*res2;
	unsigned int	i;

	res1 = (unsigned char *)s1;
	res2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (res1[i] != '\0' || res2[i] != '\0'))
	{
		if (res1[i] != res2[i])
			return (res1[i] - res2[i]);
		i++;
	}
	if (i == n)
		return (s1[i - 1] - res2[i - 1]);
	return (res1[i] - res2[i]);
}
