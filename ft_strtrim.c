/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanfred <rmanfred@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 15:30:24 by rmanfred          #+#    #+#             */
/*   Updated: 2020/05/19 17:01:08 by rmanfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (set[i])
	{
		if (set[i] == s1[j])
		{
			i = -1;
			j++;
		}
		i++;
	}
	return (j);
}

static int	ft_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(s1) - 1;
	i = 0;
	while (set[i])
	{
		if (set[i] == s1[j])
		{
			i = -1;
			j--;
		}
		i++;
	}
	return (j);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	len = end - start + 1;
	if (!(str = ft_substr(s1, start, len)))
		return (NULL);
	return (str);
}
