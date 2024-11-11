#include "ft_printf.h"
#include <stdio.h>

int main()
{
    int x = 42;
    size_t counter = 0;

	ft_putptr_pf(&x, &counter);

    printf("\nCharacters printed: %zu\n", counter);
    return 0;
}
