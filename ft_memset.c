/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coeur <coeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:30:00 by coeur             #+#    #+#             */
/*   Updated: 2026/11/18 21:33:48 by coeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_cast;

	s_cast = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s_cast[i] = c;
		i++;
	}
	return ((void *)s_cast);
}
