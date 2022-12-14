/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 20:36:40 by ioztimur          #+#    #+#             */
/*   Updated: 2022/12/12 20:52:34 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f || !lst)
	{
		return ;
	}
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
