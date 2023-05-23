/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:15:31 by afalconi          #+#    #+#             */
/*   Updated: 2023/01/23 14:50:02 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*mes1;
	unsigned char	*mes2;

	mes1 = (unsigned char *)s1;
	mes2 = (unsigned char *)s2;
	i = 0;
	j = 0;
	while (i < n)
	{
		if (mes1[i] != mes2[j])
			return (mes1[i] - mes2[j]);
		i++;
		j++;
	}
	return (0);
}
