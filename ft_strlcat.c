/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:29:47 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/31 14:17:57 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	if (dstsize == 0 || dstsize <= ft_strlen((char const *)dest))
		return (dstsize + ft_strlen((char const *)src));
	dst_len = ft_strlen(dest);
	i = ft_strlen((char const *)dest);
	j = 0;
	while (src[j] && i < dstsize - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dst_len + ft_strlen((char const *)src));
}
