/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coeur <coeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 15:45:26 by coeur             #+#    #+#             */
/*   Updated: 2026/11/18 21:34:58 by coeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && dst[i])
		i++;
	if (i == size)
		return (size + ft_strlen(src));
	ft_strlcpy(dst + i, src, size - i);
	return (i + ft_strlen(src));
}
