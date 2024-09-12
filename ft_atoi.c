/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:50:50 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/28 12:34:15 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_return_nbr(const char *str, int index, int sign)
{
	unsigned long long	nb;
	unsigned long long	pow;

	nb = 0;
	pow = 1;
	while (index >= 0)
	{
		nb += (str[index] - 48) * pow;
		pow *= 10;
		index--;
		if (nb >= 9223372036854775807 && sign == 1)
			return (-1);
		else if (nb > 9223372036854775807 && sign == -1)
			return (0);
	}
	return (sign * nb);
}

int	ft_atoi(const char *str)
{
	int	index;
	int	sign;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	index = 0;
	while (str[index] >= '0' && str[index] <= '9')
		index++;
	index--;
	return (ft_return_nbr(str, index, sign));
}
