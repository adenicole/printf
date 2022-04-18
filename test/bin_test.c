#include "main.h"

int main(void)
{
	int i;
	
	i = _printf("%b\n", 55);
	_printf("%d\n", i);
	i = _printf("123456\n");
	_printf("%d\n", i);
	return (0);
}
