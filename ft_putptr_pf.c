#include "ft_printf.h"

void	ft_putptr_pf(void *ptr, size_t *counter)
{
	ft_putstr_pf("0x", counter);
	ft_puthex_mini_pf((unsigned long long)ptr, counter);
}