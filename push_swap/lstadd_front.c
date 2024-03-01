/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 23:45:10 by ynachat           #+#    #+#             */
/*   Updated: 2024/02/26 17:38:30 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lstadd_front(p_list **lst, p_list *new)
{
	p_list	*temp;

	if (!lst)
		return ;
	if (!*lst && lst)
		*lst = new;
	else
	{
		temp = *lst;
		new->next = temp;
		*lst = new;
	}
}
