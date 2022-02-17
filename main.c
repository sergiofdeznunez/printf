#include "ft_printf.h"
#include <stdio.h>

int main()
{
	//char *s = "testing";
	int i;
	i = ft_printf("%d\n", 10);
	printf("mio: %d\n", i);
	i = printf("%d\n",10);
	printf("normal: %d\n", i);
}
