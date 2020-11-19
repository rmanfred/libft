/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanfred <rmanfred@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 19:22:46 by rmanfred          #+#    #+#             */
/*   Updated: 2020/05/19 16:56:34 by rmanfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned char	*str;
	unsigned int	l;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (!(str = (unsigned char *)malloc(sizeof(char) * (l + 1))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (f)
			str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return ((char *)str);
}
