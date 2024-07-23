#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Custom printf function.
 * @format: Format string.
 * @...: Additional arguments.
 *
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	const char *p;
	int count = 0;

	va_start(args, format);

	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == 'c')
			{
				_putchar(va_arg(args, int));
				count++;
			}
			else if (*p == 's')
			{
				count += _print_string(va_arg(args, char *));
			}
			else if (*p == '%')
			{
				_putchar('%');
				count++;
			}
			else if (*p == 'd' || *p == 'i')
			{
				count += _print_number(va_arg(args, int));
			}
			else if (*p == 'u')
			{
				count += _print_unsigned_number(va_arg(args, unsigned int));
			}
		}
		else
		{
			_putchar(*p);
			count++;
		}
	}

	va_end(args);
	
	return (count);
}
