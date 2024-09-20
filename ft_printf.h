#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

void			ft_putlen(char character, int *len);
void			ft_string(char *args, int *len);
void			ft_number(int number, int *len);
void			ft_hexa(unsigned int x, int *len, char x_or_x);
void			ft_unsigned(unsigned int u, int *len);
void			ft_pointer(size_t pointer, int *len);

int				ft_printf(const char *string, ...);

#endif
