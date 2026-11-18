/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coeur <coeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 07:59:56 by coeur             #+#    #+#             */
/*   Updated: 2026/11/18 21:34:02 by coeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	int	i;
	int	countd;

	i = 0;
	countd = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			countd++;
		i++;
	}
	return (countd);
}

static int	len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*copy_word(char const *s, char c)
{
	char	*word;
	int		i;

	word = malloc(len(s, c) + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**free_all(char **result, int n)
{
	while (n > 0)
	{
		n--;
		free(result[n]);
	}
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	if (!s)
		return (NULL);
	result = malloc((count(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			result[i] = copy_word(s, c);
			if (!result[i])
				return (free_all(result, i));
			s = s + len(s, c);
			i++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
