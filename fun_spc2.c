#include "holberton.h"

/**
 * sp_p - entry point
 * @arg: va_list
 *
 * Return: 0
 */

int sp_p(va_list arg)
{
	write(1, "p", 1);
	arg = arg;
	return (0);
}

/**
 * sp_r - prints in reverse
 * @arg: va_list
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int sp_r(va_list arg)
{
	char *str;
	int i = 0, j = 0;

	str = va_arg(arg, char *);
	if (!str)
		str = ")llun(";
	for (i = 0; str[i]; i++)
		continue;
	i--;
	while (i >= 0)
		write(1, &str[i], 1), j++, i--;

	return (j);
}

/**
 * sp_R - prints the string in rot13
 * @arg: va_list
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int sp_R(va_list arg)
{
	char *str = va_arg(arg, char *);
	int i, j, k = 0;
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i]; i++)
	{
		j = 0;
		while (abc[j] && str[i] != abc[j])
			j++;

		if (str[i] == abc[j])
		{
			write(1, &rot13[j], 1);
			k++;
		}
		else if (abc[j])
		{
			write(1, &str[i], 1);
			k++;
		}
	}
	return (k);
}

/**
 * sp_a - entry point
 * @arg: va_list
 *
 * Return: 0
 */
int sp_a(va_list arg)
{
	write(1, "a", 1);
	arg = arg;
	return (0);
}
/**
 * sp_pc - prints the percentage symbol
 * @arg: va_list
 *
 * Return: 1 that is the number of characters printed
 */
int sp_pc(va_list arg)
{
	arg = arg;
	write(1, "%", 1);
	return (1);
}
