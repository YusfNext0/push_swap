/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:41:32 by ynachat           #+#    #+#             */
/*   Updated: 2024/02/22 21:50:21 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(int sign)
{
	if (sign < 0)
		return (0);
	return (-1);
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
	{
		write (1, "error", 5);
		exit(1);
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if ((num > 922337203685477580)
				|| (num == 922337203685477580 && str[i] > '7'))
				return (ft_check(sign));
			
			num = num * 10 + (str[i++] - 48);
		}
		else
		{
			write (1, "error", 5);
			exit(1);
		}
	}
	return (num * sign);
}
