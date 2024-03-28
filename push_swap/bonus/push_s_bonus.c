/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_s_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:27:32 by ynachat           #+#    #+#             */
/*   Updated: 2024/03/28 03:34:58 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

int	check_sort_final(t_list *ptr)
{
	t_list	*p;

	p = ptr;
	while (p->next)
	{
		if (p->index > p->next->index)
			return (1);
		p = p->next;
	}
	return (0);
}

int	main(int ac, char *av[])
{
	int		i;
	t_list	*a;
	char	**p;
	t_list	*node;
	t_list	*new;
	t_list	*b;

	i = 1;
	a = NULL;
	node = NULL;
	if (ac == 1)
		return (0);
	while (av[i])
	{
		p = ft_split(av[i], ' ');
		parcing(p, &a);
		i++;
	}

	while (1)
	{
		new = lstnew_action(get_next_line(0));
		if (!new->action)
		{
			break;
		}
		lstadd_back(&node, new);
	
	}
	t_list *tmp;


	while (node)
	{
		check_action(&a, &b, node->action);
		node = node->next;
	}
	printf ("???????????????\n");	
	tmp = a;
	// while (tmp)
	// {
	// 	printf("%d", tmp->content);
	// 	tmp = tmp->next;
	// }
		printf("%d", check_sort_final(a));
	// if (check_sort_final(a))
	// 	printf("\nok");
	// else
	// 	printf("koooo");
}
