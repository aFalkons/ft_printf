/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:06:29 by afalconi          #+#    #+#             */
/*   Updated: 2023/02/11 12:40:54 by afalconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
//# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>
# include "libft.h"

typedef struct s_flag
{
	int		point;
	int		space;
	int		hashtag;
	int		minus;
	int		plus;
	int		zero;
	int		width;
	int		i;
	int		nflag;
	va_list	argptr;
}	t_flag;

int		ft_printf(const char *format, ...);
int		ft_printchar(int c);
int		ft_printformats(va_list args, const char format);
int		ft_pntlen(unsigned long long num);
void	ft_put_pnt(unsigned long long num);
int		ft_printpnt(unsigned long long pnt);
void	ft_putstr(char *str);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printunsigned(unsigned int n);
char	*ft_uitoa(unsigned int n);
int		ft_nbr_len(unsigned	int nbr);
void	ft_puthex(unsigned int num, const char format);
int		ft_printhex(unsigned int num, const char format);
int		ft_lenghthex(unsigned int num);
int		ft_printperc(void);
#endif
