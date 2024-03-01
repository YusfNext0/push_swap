/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:17:15 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/29 12:06:40 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	index;

	index = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == (const char)c)
			index = i;
		i++;
	}
	if (s[i] == (const char)c)
		return ((char *)(s + ft_strlen(s)));
	if (index == -1)
		return (NULL);
	return ((char *)(s + index));
}
