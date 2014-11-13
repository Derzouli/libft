/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:14:45 by schong            #+#    #+#             */
/*   Updated: 2014/11/10 10:53:24 by schong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char				*str;
	unsigned int		i;

	i = 0;
	if (s == NULL || len == 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!(str))
		return (NULL);
	while (s[start] && len-- > 0)
	{
		str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}
