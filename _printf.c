#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    const char *p;

    va_start(args, format);

    for (p = format; *p; p++)
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
			else if (*p == 'd')
			{
				int d = va_arg(args, int);
				count += _print_number(d);
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
