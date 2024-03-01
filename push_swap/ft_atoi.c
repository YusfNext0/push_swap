/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:33:06 by ynachat           #+#    #+#             */
/*   Updated: 2024/02/25 11:33:06 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


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
	{
		write (1, "error", 5);
		exit(1);
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + (str[i++] - 48);
			if ((num * sign)> 2147483647 || (num * sign) < -2147483648)
			{
				write (1, "error", 5);
				exit(1);
			}
		}
		else
		{
			write (1, "error", 5);
			exit(1);
		}
	}
	return (num * sign);
}
