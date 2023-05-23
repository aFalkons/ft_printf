/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:07:20 by afalconi          #+#    #+#             */
/*   Updated: 2023/02/02 12:57:53 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*itoazero(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	return (ft_strdup("-2147483648"));
}

char	*itoa2(int n, char *ret, int cont, int check)
{
	int	n2;

	ret = malloc(sizeof(char) * (cont + 1 + check));
	if (!ret)
		return (0);
	if (check == 1)
		cont ++;
	ret[cont] = 0;
	while (--cont != -1)
	{
		n2 = n % 10;
		n /= 10;
		ret[cont] = n2 + 48;
	}
	if (check == 1)
		ret[0] = '-';
	return (ret);
}

char	*ft_itoa(int n)
{
	int		n2;
	int		cont;
	int		check;
	char	*ret;

	cont = 0;
	n2 = 0;
	check = 0;
	ret = NULL;
	if (n == 0 || n == -2147483648)
		return (itoazero(n));
	if (n < 0)
		check = 1;
	if (n < 0)
		n *= -1;
	n2 = n;
	while (n2 > 0)
	{
		n2 /= 10;
		cont ++;
	}
	return (itoa2(n, ret, cont, check));
}
