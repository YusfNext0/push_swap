/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:26:05 by ynachat           #+#    #+#             */
/*   Updated: 2024/02/27 10:22:48 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra(p_list **a)
{
    p_list *last;
    p_list *befor;

    befor = (*a);
    last = lstlast((*a));
    while (befor->next->next)
       befor = befor->next;
    befor->next = NULL;
    last->next = (*a);
    (*a) = last;
}
