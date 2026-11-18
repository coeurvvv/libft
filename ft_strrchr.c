/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coeur <coeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 13:57:53 by coeur             #+#    #+#             */
/*   Updated: 2026/11/18 21:35:17 by coeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	char	ch;
	int		i;

	s = (char *)str;
	ch = (char)c;
	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == ch)
			return (&s[i]);
		i--;
	}
	return (NULL);
}
