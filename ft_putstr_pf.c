#include "ft_printf.h"

void	ft_putstr_pf(char *str, size_t *counter)
{
	while (*str)
	{
		ft_putchar_pf(*str, counter);
		str++;
	}
}