/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:06:42 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/27 10:07:53 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	index;

	if (count > 0 && size > SIZE_MAX / count)
		return (NULL);
	ptr = (void *)malloc(count * size);
	if (ptr)
	{
		index = 0;
		while (index < count * size)
			((char *)ptr)[index++] = 0;
		return (ptr);
	}
	return (NULL);
}
