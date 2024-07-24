#include "main.h"
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
	/*unsigned int u = 0; */
	/*unsigned long addr; */

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
			else
				_putchar('%'), _putchar(*p), count += 2;
		}
		else
				_putchar(*p), count++;
	}
	va_end(args);
	return (count);
}
