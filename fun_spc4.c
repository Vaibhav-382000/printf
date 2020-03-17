#include "holberton.h"

/**
 * sp_x - prints
 * @arg: va_list
 *
 * Return: the number of characters printed
 */
int sp_x(va_list arg)
{
	write(1, "x", 1);
	arg = arg;
	return (0);
}

/**
 * sp_X - prints
 * @arg: va_list
 *
 * Return: the number of characters printed
 */
int sp_X(va_list arg)
{
	write(1, "X", 1);
	arg = arg;
	return (0);
}
