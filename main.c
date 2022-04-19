#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * 
 * Return: Always 0
 */



int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;

	/*********************d and i ************************/
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);

	/*******************c,s and % parameters****************/
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	/******************* b *******************/
	_printf("%b\n", 98);

	/******************* u,o, x and X***********/
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

    	/************ S ********************/
	_printf("%S\n", "Best\nSchool");

	/**************** p *****************************/
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);

	/*************** r ************************/
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Unknown:[%r]\n");
    	/* printf("Unknown:[%r]\n"); */
    	return (0);
}
