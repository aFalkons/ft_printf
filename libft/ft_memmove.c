/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 22:19:55 by afalconi          #+#    #+#             */
/*   Updated: 2023/01/30 13:16:38 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		i = (int) len - 1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i --;
		}
	}
	else
	{
		i = 0;
		while (i < (int) len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i ++;
		}
	}
	return (dst);
}
