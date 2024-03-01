/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eny-fiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:51:43 by eny-fiti          #+#    #+#             */
/*   Updated: 2024/03/01 16:53:47 by eny-fiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*par;

	new = NULL;
	while (lst)
	{
		par = ft_lstnew(f(lst->content));
		if (!par)
		{
			ft_lstclear(&par, del);
			return (NULL);
		}
		ft_lstadd_back(&new, par);
		lst = lst->next;
	}
	return (new);
}
