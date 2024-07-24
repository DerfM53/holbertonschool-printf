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
/**
 * _print_string - Prints a string.
 * @s: String to print.
 *
 * Return: Number of characters printed.
 */
int _print_string(const char *s)
{
	int count = 0;

	while (*s)
	{
		_putchar(*s++);
		count++;
	}
	return (count);
}
/**
* _print_hexadecimal - Imprime un nombre non signé en hexadécimal.
* @n: Le nombre non signé |  imprimer.
* @uppercase: Si non zéro, utilise des lettres majuscules;
* sinon, des lettres minuscules.
* Cette fonction imprime le nombre fourni en utilisant le format hexadécimal
* (base 16). La récursion est utilisée pour traiter
* chaque chiffre du nombre.
* Les lettres hexadécimales sont choisies
* en fonction de la valeur de `uppercase`.
* Return: Le nombre de caractères imprimés.
*/
int _print_hexadecimal(unsigned long n, int uppercase)
{
		const char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

		if (n / 16)

				_print_hexadecimal(n / 16, uppercase);
		_putchar(digits[n % 16]);
		return (0);
}

