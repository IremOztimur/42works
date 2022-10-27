/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iremoztimur <iremoztimur@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:01:59 by iremoztimur       #+#    #+#             */
/*   Updated: 2022/10/27 19:32:14 by iremoztimur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t  start;
    size_t  end;
    char    *arr;

    if (s1 && set)
    {
        start = 0;
        end = ft_strlen(s1);
        while (s1[start] && ft_strchr(set, s1[start]))
            start++;
        while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
            end--;
        arr = (char *)malloc(sizeof(char) * end - start + 1);
        if (arr)
        {
            ft_strlcpy(arr, &s1[start], end - start + 1);
        }
    }
    return (arr);
}