#include "main.h"
#include <unistd.h>

/**
 * _print_number - affiche un entier
 * @n: nombre entier à afficher
 *
 * Return: le nombre de caractères imprimés
 */
int _print_number(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}
	if (n / 10)
		count += _print_number(n / 10);
	_putchar(n % 10 + '0');
	count++;
	return (count);
}
/**
 * _print_unsigned_number - affiche un entier
 * @n: nombre entier à afficher
 *
 * Return: le nombre de caractères imprimés
 */
int _print_unsigned_number(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += _print_unsigned_number(n / 10);
	_putchar(n % 10 + '0');
	count++;

	return (count);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

