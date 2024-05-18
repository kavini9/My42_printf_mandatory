/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweerasi <wweerasi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:49:53 by wweerasi          #+#    #+#             */
/*   Updated: 2024/05/17 22:00:37 by wweerasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, t_base b, int *totlen)
{
	long int	n;

	n = nbr;
	if (n < 0)
	{
		ft_putchar('-', totlen);
		n = -n;
	}
	if (n >= b.base)
		ft_putnbr(n / b.base, b, totlen);
	if (*totlen != -1)
		ft_putchar(b.str[n % b.base], totlen);
	else
		return ;
}
