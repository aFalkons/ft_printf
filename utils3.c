/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:42:45 by afalconi          #+#    #+#             */
/*   Updated: 2023/02/11 16:21:57 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pntlen(unsigned long long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_pnt(unsigned long long num)
{
	if (num >= 16)
	{
		ft_put_pnt(num / 16);
		ft_put_pnt(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_printpnt(unsigned long long pnt)
{
	int	length;

	length = 0;
	length += write(1, "0x", 2);
	if (pnt == 0)
		length += write(1, "0", 1);
	else
	{
		ft_put_pnt(pnt);
		length += ft_pntlen(pnt);
	}
	return (length);
}
