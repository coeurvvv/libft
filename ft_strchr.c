/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coeur <coeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 12:31:41 by coeur             #+#    #+#             */
/*   Updated: 2026/11/18 21:34:05 by coeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*s;
	char	ch;
	int		i;

	s = (char *)str;
	ch = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			return (&s[i]);
		i++;
	}
	if (ch == '\0')
		return (&s[i]);
	return (NULL);
}
