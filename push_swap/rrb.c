/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:26:09 by ynachat           #+#    #+#             */
/*   Updated: 2024/02/27 10:25:36 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rrb(p_list **b)
{
    p_list *last;
    p_list *befor;

    befor = (*b);
    last = lstlast((*b));
    while (befor->next->next)
       befor = befor->next;
    befor->next = NULL;
    last->next = (*b);
    (*b) = last;
}
