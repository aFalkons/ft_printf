/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:43:02 by afalconi          #+#    #+#             */
/*   Updated: 2023/02/11 13:39:49 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printunsigned(unsigned int	n)
{
	int		length;
	char	*nbr;

	length = 0;
	if (n == 0)
		length += write(1, "0", 1);
	else
	{
		nbr = ft_uitoa(n);
		length += ft_printstr(nbr);
		free(nbr);
	}
	return (length);
}

int	ft_nbr_len(unsigned	int nbr)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}

char	*ft_uitoa(unsigned int n)
{
	char	*nbr;
	int		i;

	i = ft_nbr_len(n);
	nbr = (char *)malloc(i + 1);
	if (!nbr)
		return (0);
	nbr[i] = '\0';
	while (n != 0)
	{
		nbr[i - 1] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	return (nbr);
}
