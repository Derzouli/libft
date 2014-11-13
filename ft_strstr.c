/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:18:36 by schong            #+#    #+#             */
/*   Updated: 2014/11/09 23:22:31 by schong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *s1, const char *s2)
{
	int j;
	int i;

	j = 0;
	i = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
		{
			j++;
			if (s2[j] == '\0')
				return ((char *)&s1[i - j + 1]);
		}
		else
			j = 0;
		i++;
	}
	return (NULL);
}
