/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 22:51:47 by schong            #+#    #+#             */
/*   Updated: 2014/11/10 00:20:44 by schong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int		ft_count(char const *s, char c)
{
	int			count;

	count = 0;
	while (*s)
	{
		if (*s++ == c)
			;
		else
		{
			count++;
			while (*s++ != c && *s)
				;
		}
	}
	return (count);
}

static	int		ft_fill(char const *s, char c, char **tab)
{
	int			count;
	int			i;
	int			j;

	i = 0;
	j = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		j = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > j)
		{
			tab[count] = ft_strsub(s, j, i - j);
			if ((ft_strsub(s, j, i - j) == NULL))
				return (1);
			count++;
		}
	}
	return (0);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;
	int			len;
	int			i;

	if (!(s))
		return (NULL);
	i = 1;
	len = ft_count(s, c);
	tab = (char **)malloc(sizeof(char *) * (len + 1));
	if (!(tab))
		return (NULL);
	i = ft_fill(s, c, tab);
	if (i == 1)
		return (NULL);
	tab[ft_count(s, c)] = NULL;
	return (tab);
}
