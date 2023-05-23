/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:31:32 by afalconi          #+#    #+#             */
/*   Updated: 2023/01/31 16:14:49 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		i;
	int		f;
	int		cont;

	i = 0;
	cont = 0;
	if (!s1 || !set)
		return (NULL);
	f = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && i < f)
		i++;
	while (ft_strchr(set, s1[f - 1]) && f > i)
		f--;
	ret = (char *)malloc(sizeof(char) * (((f + 1) - i)));
	if (!ret)
		return (NULL);
	while (i < f)
	{
		ret[cont] = s1[i];
		cont++;
		i++;
	}
	ret[cont] = 0;
	return (ret);
}
