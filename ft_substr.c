/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coeur <coeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 13:56:25 by coeur             #+#    #+#             */
/*   Updated: 2026/11/18 21:35:23 by coeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*end;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
	{
		end = malloc(1);
		end[0] = '\0';
		return (end);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	end = malloc(len + 1);
	if (!end)
		return (NULL);
	while (i < len)
	{
		end[i] = s[start + i];
		i++;
	}
	end[i] = '\0';
	return (end);
}
