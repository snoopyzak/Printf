#include "ft_printf.h"

int	main(void)
{
	int i = 9;
	char hh[] = "hello";
	char s[] = "hi haha please printf this for me %d and this %s";

	ft_printf(s, i, hh);
}