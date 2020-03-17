#include "holberton.h"

/**
 * _printf - Function that prints
 * @format: format to print
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int count = 0;
	/*buffer_t *buffer;*/
	/*int (*specifier)(va_list, char *, int);*/
	sp_t sps[] = {
			{'c', sp_c},
			{'s', sp_s},
			{'d', sp_d},
			{'i', sp_i},
			{'b', sp_b},
			{'u', sp_u},
			/*{'o', sp_o},*/
			/*{'x', sp_x},*/
			/*{'X', sp_X},*/
			/*{'S', sp_S},*/
			/*{'p', sp_p},*/
			{'r', sp_r},
			{'R', sp_R},
			{'%', sp_pc},
			{0, NULL}
		};

	if (!format)
		return (-1);

	va_start(arg, format);
	count = get_specifier(arg, sps, format);

	va_end(arg);
	return (count);
}

