/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sort5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 02:19:33 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/22 14:30:52 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test_sort5(t_list **a, t_list **b)
{
	while (lstsize(*a) > 3)
	{
		if ((*a)->index == 0)
			pb(a, b);
		else if ((*a)->index == 1 && *b)
			pb(a, b);
		else
			ra(a, 0);
	}
	test_sort3(a);
	pa(a, b);
	pa(a, b);
}
