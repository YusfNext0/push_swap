/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:58:51 by ynachat           #+#    #+#             */
/*   Updated: 2023/12/09 21:33:23 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*l;
	void	*s;

	l = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		s = f(lst->content);
		temp = ft_lstnew(s);
		if (!temp)
		{
			del(s);
			ft_lstclear(&l, del);
			return (NULL);
		}
		ft_lstadd_back(&l, temp);
		lst = lst->next;
	}
	return (l);
}
