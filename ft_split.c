/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanfred <rmanfred@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 15:54:11 by rmanfred          #+#    #+#             */
/*   Updated: 2020/05/19 17:11:57 by rmanfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_free_res(char **res)
{
	int		j;

	j = 0;
	while (res[j])
	{
		free(res[j]);
		j++;
	}
	free(res);
	return (NULL);
}

static char	**ft_fill(char **res, char const *s, char c, int count)
{
	int	j;
	int	i;

	i = 0;
	while (i < count && *s)
	{
		j = 0;
		if (*s != c)
		{
			while (*s != c && *s)
			{
				j++;
				s++;
			}
			if (!(res[i] = (char*)malloc(sizeof(char) * (j + 1))))
				return (ft_free_res(res));
			res[i] = ft_memcpy(res[i], s - j, j);
			res[i][j] = '\0';
			i++;
		}
		while (*s == c && *s)
			s++;
	}
	res[i] = NULL;
	return (res);
}

char		**ft_split(char const *s, char c)
{
	int		count;
	char	**res;

	res = NULL;
	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	if (!(res = (char**)malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	if (!(ft_fill(res, s, c, count)))
		return (NULL);
	return (res);
}
