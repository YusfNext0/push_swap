/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:16:48 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/25 01:05:36 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parcing(char **p, t_list **a)
{
	t_list	*new;
	t_list	*head;
	int		j;

	if (!p[0])
		error_1(1);
	j = 0;
	while (p[j])
	{
		head = (*a);
		while (head)
		{
			if (head->content == ft_atoi(p[j]))
				error_1(1);
			head = head->next;
		}
		new = lstnew(ft_atoi(p[j]));
		new->index = -1;
		lstadd_back(a, new);
		j++;
	}
}

int	main(int ac, char *av[])
{
	int		i;
	t_list	*a;
	t_list	*b;
	char	**p;

	i = 1;
	a = NULL;
	if (ac == 1)
		return (0);
	while (av[i])
	{
		p = ft_split(av[i], ' ');
		parcing(p, &a);
		i++;
	}
	indexx(&a);
	sort_all(&a, &b);
}
