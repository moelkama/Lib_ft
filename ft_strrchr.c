/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:37:38 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/25 14:17:04 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	index;

	index = ft_strlen(str);
	while (index > 0)
	{
		if (str[index] == (const char )c)
			return (((char *)str + index));
		index--;
	}
	if (str[index] == (const char )c)
		return (((char *)str + index));
	return (NULL);
}
