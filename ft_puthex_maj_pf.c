#include "ft_printf.h"

void	ft_puthex_maj_pf(unsigned long long nb, size_t *counter)
{
	if (nb >= 16)
		ft_puthex_maj_pf((nb / 16), counter);
	ft_putchar_pf((HEXMAJ[nb % 16]), counter);
}