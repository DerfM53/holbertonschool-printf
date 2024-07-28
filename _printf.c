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

	if (format == NULL)
		return (-1);

	va_start(args, format);
	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			p++;
						if (*p == 'c')
				count += _putchar(va_arg(args, int));
			else if (*p == 's')
				count += _print_string(va_arg(args, char *));
			else if (*p == '%')
				count++, _putchar('%');
			else if (*p == 'd' || *p == 'i')
				count += _print_number(va_arg(args, int));
			else if (*p == 'u')
				count += _print_unsigned_number(va_arg(args, unsigned int));
			else if (*p == 'x' || *p == 'X')
			{
				u = va_arg(args, unsigned int),
				count += _print_hexadecimal(u, *p == 'X');
			}
			else if (*p == 'o')
				count += _print_octal(va_arg(args, unsigned int));
			else if (*p == 'p')
			{
				addr = (unsigned long)va_arg(args, void *);
				count += _putchar('0'), _putchar('x');
				count += _print_hexadecimal(addr, 0);
			}
			else
			{
				count += _putchar('%');
				count += _putchar(*p);
			}
		}
		else
		{
			count += _putchar(*p);
		}
	}

	va_end(args);
	return (count);
}
