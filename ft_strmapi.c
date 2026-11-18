/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coeur <coeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 13:53:11 by coeur             #+#    #+#             */
/*   Updated: 2026/11/18 21:35:09 by coeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*end;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	end = malloc(len + 1);
	if (!end)
		return (NULL);
	while (i < len)
	{
		end [i] = f(i, s[i]);
		i++;
	}
	end[len] = '\0';
	return (end);
}
