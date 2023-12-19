/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledamasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:54:19 by ledamasc          #+#    #+#             */
/*   Updated: 2023/12/18 20:21:35 by oridamasceno     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

void			ft_putchar_len(char character, int *len);
void			ft_string(char *args, int *len);
void			ft_number(int number, int *len);
void			ft_hexadecimal(unsigned int x, int *len, char x_or_x);
void			ft_unsigned_int(unsigned int u, int *len);
void			ft_pointer(size_t pointer, int *len);

int				ft_printf(const char *string, ...);

#endif
