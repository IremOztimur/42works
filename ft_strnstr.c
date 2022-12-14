/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:32:58 by ioztimur          #+#    #+#             */
/*   Updated: 2022/12/14 20:41:25 by ioztimur         ###   ########.fr       */
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
	needle_len = ft_strlen(needle);
	if (needle_len == 0 || haystack == needle || len == 0)
		return (ptr);
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
