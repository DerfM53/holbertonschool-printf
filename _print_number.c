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
 * _print_octal - Prints an unsigned integer in octal (base 8).
 * @n: Unsigned integer to print.
 *
 * Return: Number of characters printed.
 */
int _print_octal(unsigned int n)
{
	int count = 0;

	if (n < 8)
	{
		_putchar(n % 8 + '0');
		return (1);
	}

	count += _print_octal(n / 8);
	_putchar(n % 8 + '0');
	count++;

	return (count);
}


