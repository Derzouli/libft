/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:11:06 by schong            #+#    #+#             */
/*   Updated: 2014/11/08 19:17:11 by schong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = NULL;
	list = malloc(sizeof(t_list));
	if (!(list))
		return (NULL);
	list->next = NULL;
	list->content_size = (!content ? 0 : content_size);
	if (!(content) || content_size == 0)
	{
		list->content = NULL;
		return (NULL);
	}
	list->content = ft_memalloc(content_size);
	if (list->content == 0)
	{
		free(list);
		return (NULL);
	}
	ft_memcpy(list->content, content, content_size);
	return (list);
}
