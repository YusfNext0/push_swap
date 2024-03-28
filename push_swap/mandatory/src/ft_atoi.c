/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:33:06 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/27 03:18:34 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	number(const char str, int num, int sign)
{
	if (str >= '0' && str <= '9')
	{
		num = num * 10 + (str - 48);
		if ((num * sign) > 2147483647 || (num * sign) < -2147483648)
			error_1(1);
	}
	else
		error_1(1);
	return (num);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	num;

	i = 0;
	num = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (!str[i])
		error_1(1);
	while (str[i])
		num = number(str[i++], num, sign);
	return (num * sign);
}
