/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numerical.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oridamasceno <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:30:49 by oridamasceno      #+#    #+#             */
/*   Updated: 2023/12/18 20:10:00 by oridamasceno     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_number(int number, int *len)
{
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11);
		return ;
	}
	if (number < 0)
	{
		ft_putchar_len('-', len);
		ft_number(number * -1, len);
	}
	else
	{
		if (number > 9)
			ft_number(number / 10, len);
		ft_putchar_len(number % 10 + '0', len);
	}
}

void	ft_pointer(size_t pointer, int *len)
{
	char	string[25];
	int		i;
	char	*base_char;

	base_char = "0123456789abcdef";
	i = 0;
	write(1, "0x", 2);
	(*len) += 2;
	if (pointer == 0)
	{
		ft_putchar_len('0', len);
		return ;
	}
	while (pointer != 0)
	{
		string[i] = base_char[pointer % 16];
		pointer = pointer / 16;
		i++;
	}
	while (i--)
	{
		ft_putchar_len(string[i], len);
	}
}

void	ft_hexadecimal(unsigned int x, int *len, char x_or_x)
{
	char	string[25];
	char	*base_char;
	int		i;

	if (x_or_x == 'X')
		base_char = "0123456789ABCDEF";
	else
		base_char = "0123456789abcdef";
	i = 0;
	if (x == 0)
	{
		ft_putchar_len('0', len);
		return ;
	}
	while (x != 0)
	{
		string[i] = base_char [x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ft_putchar_len(string[i], len);
}

void	ft_unsigned_int(unsigned int u, int *len)
{
	if (u >= 10)
		ft_unsgined_int(u / 10, len);
	ft_putchar_len(u % 10 + '0', len);
}
