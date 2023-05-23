/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 19:27:26 by afalconi          #+#    #+#             */
/*   Updated: 2023/01/30 19:33:50 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*i;

	if (del && lst && *lst)
	{
		while (lst && *lst)
		{
			i = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = i;
		}
	}
}
