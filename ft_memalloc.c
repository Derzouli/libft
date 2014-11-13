/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 09:57:17 by schong            #+#    #+#             */
/*   Updated: 2014/11/06 15:57:48 by schong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void *ft_memalloc(size_t size)
{
	unsigned char *memory;

	if (!(size))
		return (NULL);
	memory = (void *)malloc(sizeof(unsigned char) * size);
	if (!(memory))
		return (NULL);
	ft_bzero(memory, size);
	return (memory);
}
