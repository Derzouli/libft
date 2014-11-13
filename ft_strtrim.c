/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 20:07:28 by schong            #+#    #+#             */
/*   Updated: 2014/11/10 11:33:38 by schong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int		ft_checksum(char const *s)
{
	int i;

	i = 0;
	while (*s)
	{
		if (*s != ' ' && *s != '\n' && *s != '\t')
			i++;
		s++;
	}
	if (i == 0)
		return (0);
	return (1);
}

char			*ft_strtrim(char const *s)
{
	size_t		start;
	size_t		count;
	size_t		end;

	if (!s)
		return (NULL);
	if (ft_checksum(s) == 0)
		return (ft_memalloc(1));
	count = 0;
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
	{
		start++;
		count++;
	}
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
	{
		end--;
		count++;
	}
	return (ft_strsub(s, start, ft_strlen(s) - count));
}
