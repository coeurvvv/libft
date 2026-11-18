/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coeur <coeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 13:59:07 by coeur             #+#    #+#             */
/*   Updated: 2026/11/18 21:32:55 by coeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_negative(int n)
{
	return (n < 0);
}

static int	ft_intlen(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	longn;

	longn = n;
	if (ft_negative(n))
		longn = -longn;
	i = (ft_intlen(longn) + ft_negative(n));
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (i > ft_negative(n))
	{
		str[i - 1] = longn % 10 + '0';
		longn = longn / 10;
		i--;
	}
	if (ft_negative(n))
		str[0] = '-';
	return (str);
}
