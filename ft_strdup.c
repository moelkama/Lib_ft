/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:00:54 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/28 13:17:05 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	size;
	size_t	i;

	size = ft_strlen(s1);
	dest = (char *)malloc((size + 1) * sizeof(char ));
	if (dest)
	{
		i = 0;
		while (i < size)
			dest[i++] = *((char *)s1++);
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
