/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:32:57 by moelkama          #+#    #+#             */
/*   Updated: 2022/11/04 18:07:51 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_strs(char *s, char c)
{
	int	count_strs;
	int	m;

	count_strs = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		m = 0;
		while (*s && *s != c)
		{
			m = 1;
			s++;
		}
		if (m == 1)
			count_strs++;
	}
	return (count_strs);
}

static	char	**ft_free(char **strs, int count)
{
	int	index;

	index = 0;
	while (index < count)
		free(strs[index++]);
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**strs;
	char const	*ptr;
	int			count_strs;
	int			index;

	if (!s)
		return (NULL);
	count_strs = ft_count_strs((char *)s, c);
	strs = (char **)malloc((count_strs + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	index = 0;
	while (index < count_strs)
	{
		while (*s && *s == c)
			s++;
		ptr = s;
		while (*s && *s != c)
			s++;
		strs[index++] = ft_substr(ptr, 0, s - ptr);
		if (!strs[index - 1])
			return (ft_free(strs, count_strs));
	}
	strs[index] = NULL;
	return (strs);
}
