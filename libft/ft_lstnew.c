/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:57:54 by afalconi          #+#    #+#             */
/*   Updated: 2023/01/30 15:19:22 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lis;

	lis = malloc(sizeof(t_list));
	if (!lis)
		return (0);
	lis->content = content;
	lis->next = NULL;
	return (lis);
}
