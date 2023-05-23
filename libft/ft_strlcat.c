/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 20:50:29 by afalconi          #+#    #+#             */
/*   Updated: 2023/01/30 13:43:44 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	i = 0;
	if (!dstsize && !dst)
		return (0);
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstsize == 0 || dlen >= dstsize)
		return (slen + dstsize);
	while (src[i] && (dlen + i + 1 < dstsize))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
