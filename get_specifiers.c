#include "holberton.h"

/**
 * get_specifier - points to the correct function for print
 *@format: type of format
 *@sps: array
 * @arg: parameters list
 * @arg; struct array of function according to specifiers
 * Return: number of charactes printed
 */

int get_specifier(va_list arg, sp_t sps[], const char *format)
{
	int i, j, fun, count = 0;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; sps[j].sp; j++)
			{
				if (format[i + 1] == sps[j].sp)
				{
					fun = sps[j].f(arg);
					if (fun == -1)
						return (-1);
					count += fun;
					break;
				}
			}
			if (format[i + 1] != ' ' && !(sps[j].sp))
			{
				if (format[i + 1])
				{
					write(1, &format[i], 1);
					write(1, &format[i + 1], 1);
					count += 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
	}
	return (count);
}
