#include "main.h"
/**
 * t_char - print a character
 *@va:character
 *
 * Return: no return
 */
int t_char(va_list va)
{
	int c;

	c = va_arg(va, int);
	_putchar(c);
	return (1);
}

/**
 * t_string - print a string
 *@va: pointer to string
 *
 * Return: no return
 */
int t_string(va_list va)
{
	int i, j;
	char n[] = "(null)";
	char *s = va_arg(va, char *);

	if (s == NULL)
	{
		for (i = 0; n[i] != '\0'; i++)
			_putchar(n[i]);
		return (6);
	}
	for (j = 0; s[j] != '\0'; j++)
		_putchar(s[j]);
	return (j);
}

/**
 * print_number - Entry point
 *@va: the integer to print
 * Return: no return
 */
int print_number(va_list va)
{
	int i, len, r, l;
	unsigned int abs, num, numt;
	int n = va_arg(va, int);

	len = 0;
	i = 0;
	r = 1;
	l = 1;
	if (n < 0)
	{
		_putchar('-');
		len++;
		abs = -n;
	}
	else
	{
		abs = n;
	}

	num = abs;
	while (num > 0)
	{
		num /= 10;
		i++;
	}

	while (r < i)
	{
		l *= 10;
		r++;
	}
	while (l >= 1)
	{
		numt = (abs / l) % 10;
		_putchar(numt + '0');
		len++;
		l /= 10;
	}
	return (len);
}

/**
 * binary - Entry point
 *@va: the binary to print
 * Return: no return
 */
int binary(va_list va)
{
    unsigned int c;
	int  i, j;
	int arr[100];

	c = va_arg(va, int);
	i = 0;
	if (c == 0)
	{
		_putchar('0');
		return (1);
	}
	while (c > 0)
	{
		arr[i] = c % 2;
		c = c / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j] + '0');
	return (i);
}


/**
 * _printf - print output according to a format
 *@format: first argument
 *
 * Return: the number of characters printed(excluding the null byte)
 */
int _printf(const char *format, ...)
{
	int i = 0, j, len = 0, count;
	va_list valist;
	types difftypes[] = {
		{'c', t_char},
		{'s', t_string},
		{'d', print_number},
		{'i', print_number},
        {'b', binary},
	};

	if (format == NULL || (format[0] == '%' && format[1] == 0))
		return (-1);
	va_start(valist, format);
	while (format != NULL && format[i])
	{
		if (format[i] != '%')
			len += _putchar(format[i]);
		else
		{
			i++;
			if (format[i] == '%')
				len += _putchar('%');
			j = 0;
			count = 0;
			while (j < 13)
			{
				if (format[i] == difftypes[j].t)
				{
					len += difftypes[j].f(valist);
					count = 1;
					break;
				}
				j++;
			}
			if (!count && format[i] != '%')
			{
				len++;
				len++;
				_putchar('%');
				_putchar(format[i]);
			}
		}
		i++;
	}
	va_end(valist);
	return (len);
}
