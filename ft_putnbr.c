/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledamasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:38:34 by ledamasc          #+#    #+#             */
/*   Updated: 2023/12/17 19:03:32 by ledamasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	check_zero(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
		return (0);
	}
}

int	ft_putnbr(int n)
{
	int		divider;
	int		not_zero_first;
	char	digit;
	int	len;

	len = 0;
	divider = 1000000000;
	not_zero_first = 0;
	check_zero(n);
	if (n == -2147483648)
		ft_putstr("-2147483648");
	if (n < 0 && n != -2147483648)
	{
		n *= -1;
		len += ft_putchar('-');
	}
	while (divider && n != -2147483648)
	{
		digit = '0' + n / divider;
		if (digit != '0')
			not_zero_first = 1;
		if (not_zero_first)
			len += ft_putchar(digit);
		n = n % divider;
		divider = divider / 10;
	}
	return (len);
}
