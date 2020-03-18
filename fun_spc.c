#include "holberton.h"

/**
 * sp_c - prints a char
 * @arg: va_list
 *
 * Return: 1 that is the number of characters printed
 */
int sp_c(va_list arg)
{
	char c = va_arg(arg, int);

	write(1, &c, 1);
	return (1);
}

/**
 * sp_s - prints a string
 * @arg: va_list
 *
 * Return: the number of characters printed
 */
int sp_s(va_list arg)
{
	int i;
	char *str = va_arg(arg, char *);

	if (!str)
	str = "(null)";

	for (i = 0; str[i]; i++)
		write(1, &str[i], 1);
	return (i);
}

/**
 * sp_d - prints an integer
 * @arg: va_list
 *
 * Return: corresponding argument from arg
 */
int sp_d(va_list arg)
{
	int n;

	n = sp_i(arg);
	return (n);
}

/**
 * sp_i - prints an integer
 * @arg: va_list
 *
 * Return: the number of characters printed
 */
int sp_i(va_list arg)
{
	int n, div, add, g;
	unsigned int num;

	n  = va_arg(arg, int);
	div = 1, add = 0;

	if (n < 0)
	{
		add += write(1, "-", 1);
		num = n * -1;
	}
	else
		num = n;
	while (num / div > 9)
		div *= 10;
	while (div)
	{
		g = num / div + '0';
		add += write(1, &g, 1);
		num %= div;
		div /= 10;
	}
	return (add);
}

/**
 * sp_b- prints in binary
 * @arg: va_list
 *
 * Return: he number of characters printed
 */
int sp_b(va_list arg)
{
	unsigned int bin[sizeof(unsigned int) * 8 + 1];
	int i = 0;
	unsigned int n = 0, k = 0, b;

	n = va_arg(arg, unsigned int);

	if (n == 0)
		return (write(1, &n, 1));

	
	while (n > 0)
	{
		bin[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		b = bin[i] + '0';
		write(1, &b, 1);
		k++;
	}
	return (k);
}
