#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int i;
	//char *s = "testing";
	//unsigned int	test = -47593;
	//int test = -74732;
	i = ft_printf("%d %d %d%d%d\n", 1, -1, -21474836, 2147483647, 42);//27
	printf("MIO %d\n", i);
	i = printf("%d %d %d%d%d\n", 1, -1, -21474836, 2147483647, 42);//14
	printf("NOR %d\n", i);
}

/*nt putint(int num, int len)
{
	char *base = "0123456789";

	if (num > 9)
		len = putint(num/10, len);
	len ++;
	write(1, base[num%10], 1);
	return (mlen);
}*/