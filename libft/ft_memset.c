/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:54:03 by afalconi          #+#    #+#             */
/*   Updated: 2023/01/31 16:26:09 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t size)
{
	size_t	i;
	char	*cast_b;

	i = 0;
	cast_b = (char *)b;
	while (i < size)
	{
		cast_b[i] = c;
		i++;
	}
	return ((void *)cast_b);
}
