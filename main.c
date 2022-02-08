#include "ft_printf.h"
#include <stdio.h>

int main()
{
	//char *s = "testing";
	unsigned int	test = 23487593245;
	ft_printf("ft_printf printed: %u\n", test);
	printf("   printf printed: %u\n", test);
}