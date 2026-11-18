/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coeur <coeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:57:03 by coeur             #+#    #+#             */
/*   Updated: 2026/11/18 21:33:36 by coeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cast;
	unsigned char	c_cast;
	size_t			i;

	s_cast = (unsigned char *)s;
	c_cast = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s_cast[i] == c_cast)
			return (&s_cast[i]);
		i++;
	}
	return (0);
}
