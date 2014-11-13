/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 09:59:37 by schong            #+#    #+#             */
/*   Updated: 2014/11/07 12:06:11 by schong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_except(void)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * 12)))
		return (NULL);
	ft_strcpy(str, "-2147483648");
	return (str);
}

char		*ft_itoa(int n)
{
	int		length;
	char	*str;
	int		save;

	length = 1;
	save = n;
	if (n == -2147483648)
		return (ft_except());
	if (n < 0 && length++)
		save = -save;
	while (!(-9 <= n && n <= 9) && length++)
		n = n / 10;
	if (!(str = (char *)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	str[length] = '\0';
	while (length > 0)
	{
		str[length - 1] = (save % 10) + '0';
		save = save / 10;
		length--;
	}
	if (n < 0)
		str[length] = '-';
	return (str);
}
