/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coeur <coeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 15:46:08 by coeur             #+#    #+#             */
/*   Updated: 2026/11/18 21:35:14 by coeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	size_t	i;
	size_t	j;

	b = (char *)big;
	if (little[0] == '\0')
		return (b);
	i = 0;
	while (b[i] && i < len)
	{
		j = 0;
		while (little[j] && i + j < len && b[i + j] == little[j])
			j++;
		if (!little[j])
			return (&b[i]);
		i++;
	}
	return (NULL);
}
