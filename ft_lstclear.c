/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coeur <coeur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 07:56:00 by coeur             #+#    #+#             */
/*   Updated: 2026/11/18 21:33:18 by coeur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*rdm;
	t_list	*tmp;

	rdm = (*lst);
	tmp = rdm;
	while (rdm != NULL)
	{
		tmp = rdm->next;
		if (rdm)
		{
			del(rdm->content);
			free(rdm);
			rdm = NULL;
		}
		rdm = tmp;
	}
	(*lst) = NULL;
}
