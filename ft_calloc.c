/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:09:03 by ioztimur          #+#    #+#             */
/*   Updated: 2022/10/17 21:31:30 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	sizeinbytes;

	sizeinbytes = count * size;
	p = malloc(sizeinbytes);
	if (p != NULL)
	{
		ft_memset(p, 0, sizeinbytes);
	}
	return (p);
}
