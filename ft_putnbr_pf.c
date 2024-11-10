#include "ft_printf.h"

void	ft_putnbr_pf(int nb, size_t *counter)
{
	int long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar_pf('-', counter);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_pf((n / 10), counter);
	ft_putchar_pf(('0' + n % 10), counter);
}