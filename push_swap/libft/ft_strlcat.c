/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:36:46 by ynachat           #+#    #+#             */
/*   Updated: 2023/12/08 15:47:08 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lend;
	size_t	s;
	size_t	lens;

	if ((!dst || !src) && !dstsize)
		return (ft_strlen(src));
	i = 0;
	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	s = lend;
	if (s < dstsize && dstsize != 0)
	{
		while (src[i] && i < (dstsize - s) - 1)
		{
			dst[lend] = src[i];
			lend++;
			i++;
		}
		dst[lend] = '\0';
		return (s + lens);
	}
	else
		return (lens + dstsize);
}
