#include "holberton.h"


int sp_c(va_list arg)
{
	char c = va_arg(arg, int);
	write(1, &c, 1);
	return (1);
}

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

int sp_d(va_list arg)
{
	int n;

	n = sp_i(arg);
	return (n);
}

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

int sp_b(va_list arg)
{
	write(1,"b",1);
	arg = arg;

	return (0);
}
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

int sp_o(va_list arg)
{
	write(1,"o",1);
	arg = arg;
	

	return (0);
}
int sp_x(va_list arg)
{
	write(1,"x",1);
	arg = arg;
	

	return (0);
}
int sp_X(va_list arg)
{
	write(1,"X",1);
	arg = arg;
	

	return (0);
}
int sp_S(va_list arg)
{
	write(1,"S",1);
	arg = arg;
	

	return (0);
}
int sp_p(va_list arg)
{
	write(1,"p",1);
	arg = arg;
	

	return (0);
}
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

int sp_a(va_list arg)
{
	write(1,"a",1);
	arg = arg;
	

	return (0);
}
int sp_pc(va_list arg)
{
	arg = arg;
	write(1, "%", 1);
	return (1);
}
