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
