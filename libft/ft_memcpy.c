/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:22:02 by afalconi          #+#    #+#             */
/*   Updated: 2023/02/03 15:34:17 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*medest;
	char	*mesrc;

	i = 0;
	if (!dest && !src)
		return (NULL);
	medest = (char *)dest;
	mesrc = (char *)src;
	while (i < n)
	{
		medest[i] = mesrc[i];
		i++;
	}
	return ((void *) medest);
}
