/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 02:01:10 by ioztimur          #+#    #+#             */
/*   Updated: 2022/12/07 02:21:28 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *A;

	A = NULL;
	t_list *temp = (t_list*)malloc(sizeof(t_list));
	if (!temp)
	{
		return (NULL);
	}
	temp->content = (void *)content;
	temp->next = NULL;
	A = temp;
	return (A);
}
