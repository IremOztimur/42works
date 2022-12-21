/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:32:58 by ioztimur          #+#    #+#             */
/*   Updated: 2022/12/18 18:28:57 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;
	size_t	needle_len;

	i = 0;
	ptr = (char *)haystack;
	if (!(*needle) || len == 0)
		return (ptr);
	needle_len = ft_strlen(needle);
	while (ptr[i] && i < len)
	{
		j = 0;
		while (ptr[i + j] && needle[j] && ptr[i + j] == needle[j] && i
			+ j < len)
		{
			j++;
		}
		if (needle_len == j)
			return (ptr + i);
		i++;
	}
	return (0);
}
