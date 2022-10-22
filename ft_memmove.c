/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:14:12 by ioztimur          #+#    #+#             */
/*   Updated: 2022/10/17 17:55:10 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void * dst, const void *src, size_t len)
{
	char	*tmp;

	tmp = malloc(sizeof(char) * len + 1);
	if(!tmp)
		return (0);
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}
