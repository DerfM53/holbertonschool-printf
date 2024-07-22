#include "main.h"
#include <stdarg.h>


{

/* Déclaration des functions pour chaque arguments */
void print char(va_list args);
void print string(va_list args);
void print percent(va_list args);


/* Exemple de tableau spécificateur */
{
	prif_t specifiers[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
};

int _printf(const char *format, ...)

va_list args;
va_start(args, format);
const char *ptr;

for (ptr = format; *ptr != '\0' ptr++)
{
	if (*ptr != '%')
	{
		putchar(*ptr);
		i++;
	}
}
return i;
}
