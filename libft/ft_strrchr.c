/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:51:05 by afalconi          #+#    #+#             */
/*   Updated: 2023/01/30 13:40:53 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	pos;
	int	check;

	i = 0;
	pos = 0;
	check = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			check = 1;
			pos = i;
		}
		i ++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)s + i);
	}
	if (check == 1)
		return ((char *)s + pos);
	return (0);
}
