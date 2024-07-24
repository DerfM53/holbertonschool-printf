
#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - Custom printf function.
 * @format: Format string.
 * @...: Additional arguments.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *p;
	unsigned int u = 0;
	unsigned long addr;

	va_start(args, format);
	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == 'c')
				_putchar(va_arg(args, int)), count++;
			else if (*p == 's')
				count += _print_string(va_arg(args, char *));
			else if (*p == '%')
				_putchar('%'), count++;
			else if (*p == 'd' || *p == 'i')
				count += _print_number(va_arg(args, int));
			else if (*p == 'u')
				count += _print_unsigned_number(va_arg(args, unsigned int));
			else if (*p == 'x')
				u = va_arg(args, unsigned int), count += _print_hexadecimal(u, 0);
			else if (*p == 'X')
				u = va_arg(args, unsigned int), count += _print_hexadecimal(u, 1);
			else if (*p == 'o')
				count += _print_octal(va_arg(args, unsigned int));
			else if (*p == 'p')
			{
				addr = (unsigned long)va_arg(args, void *);
				_putchar('0'), _putchar('x');
				count += 2, count += _print_hexadecimal(addr, 0);
			}
			else
				_putchar('%'), _putchar(*p), count += 2;
		}
		else
				_putchar(*p), count++;
	}
	va_end(args);
	return (count);
}
