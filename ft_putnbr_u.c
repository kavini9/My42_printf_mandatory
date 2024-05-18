/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweerasi <wweerasi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 16:14:58 by wweerasi          #+#    #+#             */
/*   Updated: 2024/05/18 16:33:50 by wweerasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned long n, t_base b, int *totlen)
{
	if (n >= (unsigned long) b.base)
		ft_putnbr_u(n / b.base, b, totlen);
	if (*totlen != -1)
		ft_putchar(b.str[n % b.base], totlen);
	else
		return ;
}
