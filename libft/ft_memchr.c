/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:34:50 by afalconi          #+#    #+#             */
/*   Updated: 2023/01/31 16:24:58 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*cast_str;
	unsigned char	character;

	i = 0;
	cast_str = (unsigned char *)str;
	character = (unsigned char )c;
	while (i < n)
	{
		if (cast_str[i] == character)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
