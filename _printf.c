#include "holberton.h"

/**
 * _printf - Function that prints
 * @format: 
 * Return: 
 */

int _printf(const char *format, ...)
{
	va_list print;
	int count = 0;

	MyPrint prints[] = {
		{"c", print_character},
		{"s", print_string},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"u", print_unsigned_decimal},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_HEX},
		{"S", print_SString},
		{"p", print_address},
		{"r", print_reverse},
		{"R", print_rot13},
		{NULL, NULL}
	};

	struct fsdsdsd flag[] = {

		{"+", f_plus},
		{" ", f_space},
		{NULL, NULL}
	};

	if (!format)
		return (-1);
	va_start(print, format);

	va_end(print);
	return ();
}
