#include "ft_printf.h"

void	ft_putuint_pf(unsigned int nb, size_t *counter)
{
	if (nb > 9)
		ft_putnbr_pf((nb / 10), counter);
	ft_putchar_pf(('0' + nb % 10), counter);
}