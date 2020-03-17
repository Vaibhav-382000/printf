#include "holberton.h"

/**
 * sp_u - prints an unsigned int number
 * @arg: va_list
 *
 * Return: argument to print
 */
int sp_u(va_list arg)
{
	unsigned int n;

	n = va_arg(arg, unsigned int);

	if (n == 0)
		return (aux_u(n));

	if (n < 1)
		return (-1);

	return (aux_u(n));
}

/**
 * aux_u - prints an unsigned integer number
 * @n: unsigned int number to print
 *
 * Return:  the number of characters printed
 */
int aux_u(unsigned int n)
{
	int div, add, g;
	unsigned int n2;

	div = 1, add = 0;
	n2 = n;
	while (n2 / div > 9)
		div *= 10;

	while (div)
	{
		g = n2 / div + '0';
		add += write(1, &g, 1);
		n2 %= div;
		div /= 10;
	}
	return (add);
}

/**
 * sp_o- prints in octal form
 * @arg: va_list
 *
 * Return: the number of characters printed
 */
int sp_o(va_list arg)
{
	write(1, "o", 1);
	arg = arg;
	return (0);
}

/**
 * sp_S - prints
 * @arg: va_list
 *
 * Return: the number of characters printed
 */
int sp_S(va_list arg)
{
	write(1, "S", 1);
	arg = arg;
	return (0);
}
