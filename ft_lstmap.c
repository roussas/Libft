/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpagkalo <kpagkalo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:11:17 by kpagkalo          #+#    #+#             */
/*   Updated: 2026/10/06 13:11:21 by kpagkalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*node;
	void	*new_stuff;

	res = NULL;
	while (lst != NULL)
	{
		new_stuff = f(lst->content);
		node = ft_lstnew(new_stuff);
		if (node == NULL)
		{
			ft_lstclear(&res, del);
			del(new_stuff);
			return (NULL);
		}
		ft_lstadd_back(&res, node);
		lst = lst->next;
	}
	return (res);
}
