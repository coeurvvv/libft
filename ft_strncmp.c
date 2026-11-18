/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coeur <coeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 14:54:13 by coeur             #+#    #+#             */
/*   Updated: 2026/11/18 21:35:12 by coeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*u1;
	const unsigned char	*u2;
	size_t				i;

	u1 = (const unsigned char *)s1;
	u2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (u1[i] != u2[i])
			return (u1[i] - u2[i]);
		if (u1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
