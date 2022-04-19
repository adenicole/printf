#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"c", print_char},
		{"s", print_string},
		{"b", print_binary},
		{"u", print_unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_HEX},
		{"S", print_String},
		{"p", print_pointer},
		{"r", print_rev},
		{"R", print_rot13},
		{NULL, NULL},
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	printed_chars = format_reciever(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}

