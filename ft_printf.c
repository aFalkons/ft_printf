/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:03:21 by afalconi          #+#    #+#             */
/*   Updated: 2023/02/09 15:53:12 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_printformats(va_list args, const char format)
{
	int	i;

	i = 0;
	if (format == 'c')
		i += ft_printchar(va_arg(args, int));
	else if (format == 's')
		i += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		i += ft_printpnt(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		i += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		i += ft_printunsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		i += ft_printhex(va_arg(args, unsigned int), format);
	else if (format == '%')
		i += ft_printperc();
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			length += ft_printformats(args, str[i + 1]);
			i++;
		}
		else
			length += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (length);
}
