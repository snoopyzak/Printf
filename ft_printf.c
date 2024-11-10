#include "ft_printf.h"

void	ft_format(va_list hh, char *str, size_t *counter)
{
	if (*str == 'c')
		ft_putchar_pf(va_arg(hh, int), counter);
	else if (*str == 's')
		ft_putstr_pf(va_arg(hh, char *), counter);
	else if (*str == 'd' || *str == 'i')
		ft_putnbr_pf(va_arg(hh, int), counter);
	else if (*str == 'u')
		ft_putuint_pf(va_arg(hh, unsigned int), counter);
	else if (*str == '%')
		ft_putchar_pf(*str, counter);
}

int	ft_printf(const char *str, ...)
{
	va_list	hh;
	size_t	counter;

	if (!str)
		return (0);
	counter = 0;
	va_start(hh, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str)
				ft_format(hh, (char *)str, &counter);
		}
		else
			ft_putchar_pf(*str, &counter);
		str++;
	}
	va_end(hh);
	return (counter);
}