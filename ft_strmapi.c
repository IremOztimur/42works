/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iremoztimur <iremoztimur@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:32:39 by iremoztimur       #+#    #+#             */
/*   Updated: 2022/10/27 19:56:06 by iremoztimur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    char    *arr;
    
    if (!s || !f)
    {
        return (0);
    }
    arr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!arr)
    {
        return (0);
    }
    while (i < ft_strlen(s) + 1)
    {
        arr[i] = f(i, s[i]);
        i++;
    }
    arr[i] = 0;
    return (arr);
    
}