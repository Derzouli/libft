/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 21:40:12 by schong            #+#    #+#             */
/*   Updated: 2014/11/07 14:14:29 by schong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (!(s1) && !(s2))
		return (0);
	if (!(s1) || !(s2))
		return (0);
	if (ft_strcmp(s1, s2) != 0)
	{
		return (0);
	}
	return (1);
}
