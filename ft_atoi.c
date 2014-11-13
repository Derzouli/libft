/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 22:36:23 by schong            #+#    #+#             */
/*   Updated: 2014/11/08 00:06:20 by schong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(int c)
{
	return ((c == ' ' || c == '\n' || c == '\v' || c == '\f'
	|| c == '\r' || c == '\t'));
}

int				ft_atoi(const char *str)
{
	int		sign;
	int		nb;
	int		i;

	sign = 1;
	nb = 0;
	i = 0;
	while (ft_isspace(str[i]))
		str++;
	if (str[i] == '-')
	{
		sign = -1;
		str++;
	}
	else if (str[i] == '+')
		str++;
	while (ft_isdigit(str[i]))
	{
		nb = nb * 10;
		nb = nb + (*str - '0');
		str++;
	}
	return (sign * nb);
}
