/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:38:49 by schong            #+#    #+#             */
/*   Updated: 2014/11/09 19:57:40 by schong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	length;
	size_t	total_length;

	length = 0;
	total_length = ft_strlen(dst) + ft_strlen(src);
	while (length < size && *dst)
	{
		dst++;
		length++;
	}
	if (size == length)
		return (size + ft_strlen(src));
	while (length < (size - 1) && *src)
	{
		*dst++ = *src++;
		length++;
	}
	*dst = '\0';
	return (total_length);
}
