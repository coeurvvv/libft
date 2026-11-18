/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coeur <coeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:35:46 by coeur             #+#    #+#             */
/*   Updated: 2026/11/18 21:33:41 by coeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d_cast;
	const unsigned char	*s_cast;

	d_cast = (unsigned char *)dest;
	s_cast = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d_cast[i] = s_cast[i];
		i++;
	}
	return (d_cast);
}
