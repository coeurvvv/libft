/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coeur <coeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:35:58 by coeur             #+#    #+#             */
/*   Updated: 2026/11/18 21:33:44 by coeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d_cast;
	const unsigned char	*s_cast;

	d_cast = (unsigned char *)dest;
	s_cast = (const unsigned char *)src;
	if (dest < src)
	{
		while (n--)
			*d_cast++ = *s_cast++;
	}
	else
	{
		while (n--)
		{
			d_cast[n] = s_cast[n];
		}
	}
	return (dest);
}
