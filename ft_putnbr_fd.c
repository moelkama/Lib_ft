/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:20:48 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/27 11:00:39 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft(long nb)
{
	int		k;

	k = 1;
	while (nb / 10 != 0)
	{
		k *= 10;
		nb /= 10;
	}
	return (k);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	num;
	int		k;

	nb = n;
	k = ft(nb);
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	while (k >= 1)
	{
		num = nb / k + 48;
		write(fd, &num, 1);
		nb %= k;
		k /= 10;
	}
}
