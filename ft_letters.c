#include "ft_printf.h"

void	ft_putlen(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void	ft_string(char *args, int *len)
{
	size_t	i;

	i = 0;
	if (!args)
	{
		write(1, "(null)", 6);
		(*len) += 6;
		return ;
	}
	while (args[i] != '\0')
	{
		ft_putlen(args[i], len);
		i++;
	}
}
