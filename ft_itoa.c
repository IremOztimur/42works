/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:35:44 by iremoztimur       #+#    #+#             */
/*   Updated: 2022/12/18 18:51:47 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*arr;

	arr = (char *)malloc(sizeof(char) * 2);
	if (!(arr))
		return (NULL);
	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
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
