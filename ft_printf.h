#ifndef		FT_PRINTF_H
# define	FT_PRINTF_H

# define HEXMINI	"0123456789abcdef"
# define HEXMAJ		"0123456789ABCDEF"

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

void	ft_putchar_pf(char  c, size_t *counter);
void	ft_putstr_pf(char *str, size_t *counter);
void	ft_putnbr_pf(int nb, size_t *counter);
void	ft_putuint_pf(unsigned int nb, size_t *counter);
int	ft_printf(const char *str, ...);
void	ft_puthex_mini_pf(unsigned long long nb, size_t *counter);
void	ft_puthex_maj_pf(unsigned long long nb, size_t *counter);
void	ft_putptr_pf(void *ptr, size_t *counter);

#endif