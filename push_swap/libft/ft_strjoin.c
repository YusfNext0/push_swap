/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:36:20 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/20 22:56:46 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strxcpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	p = malloc(((sizeof(char)) * (len1 + len2 + 1)));
	if (!p)
		return (0);
	ft_strxcpy(p, s1, len1);
	ft_strxcpy(p + len1, s2, len2);
	return (p);
}
