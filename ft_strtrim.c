/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:43:08 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/31 12:56:24 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isexist(char const *set, char c)
{
	while (*set)
		if (*(set++) == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		end;
	int		index;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_isexist(set, *s1))
		s1++;
	end = ft_strlen(s1) - 1;
	while (end >= 0 && ft_isexist((char *)set, s1[end]))
		end--;
	str = (char *)malloc((end + 2) * sizeof(char ));
	if (str)
	{
		index = 0;
		while (index < end + 1)
		{
			str[index] = s1[index];
			index++;
		}
		str[index] = '\0';
		return (str);
	}
	return (NULL);
}
