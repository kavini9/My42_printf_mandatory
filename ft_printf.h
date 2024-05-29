/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweerasi <wweerasi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:41:35 by wweerasi          #+#    #+#             */
/*   Updated: 2024/05/27 14:53:28 by wweerasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define DEC "0123456789"
# define HEX "0123456789abcdef"
# define HEX_U "0123456789ABCDEF"
# include <stdarg.h>
# include <unistd.h>

typedef struct s_base
{
	char		*str;
	int			base ;
}				t_base;

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *totlen);
void	ft_putnbr(int nbr, t_base b, int *totlen);
void	ft_putnbr_u(unsigned long nbr, t_base b, int *totlen);
void	ft_putstr(char *str, int *totlen);
int		ft_strlen(const char *s);

#endif
