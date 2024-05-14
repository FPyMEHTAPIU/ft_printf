#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	char str[] = "The code!";	
	int size = ft_printf("String: %s\n", str);
	printf("bytes: %d\nStandard: %s\n", size, str);
	printf("Standard bytes: %d\n\n", printf("String: %s\n", str));

	size = ft_printf("String");
	printf("\nbytes: %d\nStandard: %s\n", size, "String");
	printf("\nStandard bytes: %d\n\n", printf("String"));

	size = ft_printf("Number = %d\n", 598291);
	printf("bytes: %d\nStandard: %d\n", size, 598291);
	printf("Standard bytes: %d\n\n", printf("Number = %d\n", 598291));


	size = ft_printf("Number = %x\n", 455);
	printf("bytes: %d\nStandard: %x\n", size, 455);
	printf("Standard bytes: %d\n\n", printf("Number = %x\n", 455));

	size = ft_printf("Number = %X\n", 211);
	printf("bytes: %d\nStandard: %X\n", size, 211);
	printf("Standard bytes: %d\n\n", printf("Number = %X\n", 211));

	const char *str2 = "String";
	printf("\nVoid * argument: %p\n", str);
	ft_printf("\nMy Void * argument: %p\n", str);
	int s = 1100000000, w = 1100000000;
	int *p = malloc(sizeof(int) * 30);
	printf("Another one: %p\n", 1100000000);
	printf("Another one: %p\n", &s);
	printf("Another one: %p\n", &w);
	printf("Another one: %p\n", p);

	ft_printf("My Another one: %p\n", 1100000000);
	ft_printf("My Another one: %p\n", &s);
	ft_printf("My Another one: %p\n", &w);
	ft_printf("My Another one: %p\n", p);

	free(p);

	ft_printf("My: %p %p \n", 0, 0);
	printf("Original: %p %p \n", 0, 0);

}
