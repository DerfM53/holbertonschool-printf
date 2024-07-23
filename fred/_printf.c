#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *p;
	unsigned int u = 0;
	int num = 0;

	va_start(args, format);

	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == 'c')
			{
				char c = va_arg(args, int);
				_putchar(c);
				count++;
			}
			else if (*p == 's')
			{
				char *s = va_arg(args, char *);
				while (*s)
				{
				_putchar(*s++);
				count++;
				}
			}
			else if (*p == '%')
			{
			_putchar('%');
				count++;
			}
			else if (*p == 'd' || *p == 'i')
			{
				num = va_arg(args, int);
				count += _print_number(num);
			}
		else if (*p == 'u')
			{
				u = va_arg(args, unsigned int);
				count += _print_unsigned_number(u);
			}

		if (*p == '%')
		{
			p++;
			if (*p == 'x')
		{
			u = va_arg(args, unsigned int);
			count += _print_hexadecimal(u, 0);
		}
		else if (*p == 'X')
		{
			u = va_arg(args, unsigned int);
			count += _print_hexadecimal(u, 1);
		}
			else
			{
				_putchar('%');
				_putchar(*p);
				count += 2;
			}
		}
		else
		{
			_putchar(*p);
			count++;
		}
	}
	va_end(args);
	return count;
}
