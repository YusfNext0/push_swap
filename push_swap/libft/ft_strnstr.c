/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:03:28 by ynachat           #+#    #+#             */
/*   Updated: 2023/12/10 14:15:03 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	b;

	i = 0;
	if (!haystack && needle && !len)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len > ft_strlen(haystack))
		len = ft_strlen(haystack);
	while (haystack[i] && i < len)
	{
		b = 0;
		while (haystack[i + b] == needle[b] && i + b < len)
		{
			if (needle[b + 1] == '\0')
				return ((char *)haystack + i);
			b++;
		}
		i++;
	}
	return (NULL);
}
