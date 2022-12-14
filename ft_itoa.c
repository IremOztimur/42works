/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:35:44 by iremoztimur       #+#    #+#             */
/*   Updated: 2022/12/14 20:51:03 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_iremcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*arr;

	arr = (char *)malloc(sizeof(char) * 2);
	if (!(arr))
		return (NULL);
	if (n == -2147483648)
	{
		arr = (char *)malloc(sizeof(char) * 12);
		return (ft_iremcpy(arr, "-2147483648"));
	}
	else if (n < 0)
	{
		arr[0] = '-';
		arr[1] = '\0';
		arr = ft_strjoin(arr, ft_itoa(-n));
	}
	else if (n > 9)
		arr = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10)
	{
		arr[0] = n + 48;
		arr[1] = 0;
	}
	return (arr);
}
