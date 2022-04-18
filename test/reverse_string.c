#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int a;
	int b;
	char *str;

	str = "NULL";
	a = _printf("%r\n", NULL); 
	printf("--->%d\n", a); 

	b = _printf("%r\n", str); 
	printf("%d\n", b);

	b = _printf("%r\n", str); 
	printf("%d\n", b); 
	return (0);
}