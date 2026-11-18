/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coeur <coeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 09:46:42 by coeur             #+#    #+#             */
/*   Updated: 2026/11/18 21:33:28 by coeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dup;
	t_list	*new;
	void	*content;

	if (lst == NULL)
		return (NULL);
	dup = NULL;
	new = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		dup = ft_lstnew(content);
		if (!dup)
		{
			del(content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, dup);
		lst = lst->next;
	}
	return (new);
}
