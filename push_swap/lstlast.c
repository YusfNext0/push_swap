/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:57:01 by ynachat           #+#    #+#             */
/*   Updated: 2024/02/27 09:39:16 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

p_list	*lstlast(p_list *lst)
{
	p_list	*node;

	node = lst;
	if (lst)
	{
		while (node->next)
		{
			node = node->next;
		}
	}
	return (node);
}
