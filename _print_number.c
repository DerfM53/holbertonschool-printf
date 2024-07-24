#include "main.h"
#include <unistd.h>
/**
 * _print_number - Affiche un entier en base décimale.
 * @n: Le nombre entier à afficher.
 *
 * Cette fonction affiche le nombre entier fourni en utilisant la fonction
 * `_putchar` pour chaque chiffre. Si le nombre est négatif, elle affiche
 * le signe '-' avant de traiter la valeur absolue du nombre.
 *
 * Return: Le nombre de caractères imprimés.
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
	return (count + 1);
}
/**
 * _print_unsigned_number - Affiche un entier non signé en base décimale.
 * @n: Le nombre entier non signé à afficher.
 *
 * Cette fonction affiche le nombre entier non signé fourni en utilisant la
 * fonction `_putchar` pour chaque chiffre. Elle gère les chiffres de manière
 * récursive.
 *
 * Return: Le nombre de caractères imprimés.
 */
int _print_unsigned_number(unsigned int n)
{
		int count = 0;

		if (n / 10)

			count += _print_unsigned_number(n / 10);
	_putchar(n % 10 + '0');
	return (count + 1);
}
/**
 * _print_hexadecimal - Imprime un nombre non signé en hexadécimal.
 * @n: Le nombre non signé à imprimer.
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
/**
 * _print_octal - Imprime un nombre entier non signé en octal (base 8).
 * @n: Le nombre entier non signé à imprimer.
 *
 * Cette fonction imprime le nombre fourni en utilisant le format octal
 * (base 8). La récursion est utilisée pour traiter chaque chiffre du nombre.
 *
 * Return: Le nombre de caractères imprimés.
 */
int _print_octal(unsigned int n)
{
		if (n / 8)
			_print_octal(n / 8);
		_putchar(n % 8 + '0');
		return (0);
}
/**
 * _print_string - Imprime une chaîne de caractères.
 * @s: La chaîne de caractères à imprimer.
 *
 * Cette fonction affiche chaque caractère de la chaîne fournie en utilisant
 * la fonction `_putchar`. La chaîne est affichée jusqu'à
 * ce que le caractère de fin de chaîne (`\0`) soit rencontré.
 *
 * Return: Le nombre de caractères imprimés.
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
