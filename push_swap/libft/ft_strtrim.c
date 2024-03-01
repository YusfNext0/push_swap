/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:31:08 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/29 23:05:07 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_it(char const *set, char const c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*p;
	size_t	len;
	size_t	len2;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (s1[i] && find_it(set, s1[i]))
		i++;
	len = ft_strlen(s1);
	while (len > i && find_it(set, s1[len - 1]))
		len--;
	len2 = len - i + 1;
	p = malloc(sizeof(char ) * len2);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1 + i, len2);
	return (p);
}
