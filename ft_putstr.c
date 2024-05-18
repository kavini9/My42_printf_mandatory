/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweerasi <wweerasi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:26:41 by wweerasi          #+#    #+#             */
/*   Updated: 2024/05/17 22:00:31 by wweerasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *totlen)
{
	if (!str)
		str = "(null)";
	while (*str && *totlen != -1)
		ft_putchar(*str++, totlen);
}
