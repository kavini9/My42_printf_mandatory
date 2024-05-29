/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweerasi <wweerasi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:58:42 by wweerasi          #+#    #+#             */
/*   Updated: 2024/05/29 17:31:17 by wweerasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_base	ft_base(char *str_b)
{
	t_base	base;

	base.str = str_b;
	base.base = ft_strlen(str_b);
	return (base);
}

static void	ft_cspdiuxx(const char *spec, va_list args, int *totlen)
{
	if (*spec == 'c')
		ft_putchar(va_arg(args, int), totlen);
	else if (*spec == 's')
		ft_putstr(va_arg(args, char *), totlen);
	else if (*spec == 'p')
	{
		ft_putstr("0x", totlen);
		ft_putnbr_u(va_arg(args, unsigned long), ft_base(HEX), totlen);
	}
	else if (*spec == 'd' || *spec == 'i')
		ft_putnbr(va_arg(args, int), ft_base(DEC), totlen);
	else if (*spec == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), ft_base(DEC), totlen);
	else if (*spec == 'x')
		ft_putnbr_u(va_arg(args, unsigned int), ft_base(HEX), totlen);
	else if (*spec == 'X')
		ft_putnbr_u(va_arg(args, unsigned int), ft_base(HEX_U), totlen);
	else if (*spec == '%')
		ft_putchar('%', totlen);
	else
		ft_putchar(*spec, totlen);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		totlen;

	totlen = 0;
	va_start(args, format);
	while (*format && totlen != -1)
	{
		if (*format == '%' && format++ && *format)
			ft_cspdiuxx(format, args, &totlen);
		else if (*format)
			ft_putchar(*format, &totlen);
		if (*format)
			format++;
	}
	va_end(args);
	return (totlen);
}
