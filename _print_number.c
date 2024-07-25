#include "main.h"
#include <unistd.h>
/**
 * _print_number - Prints an integer in decimal base.
 * @n: The integer to be printed.
 *
 * This function printsthe provided integer using the '_putchar' function
 * for each digit. If the number is negative, it prints the '-' sign before
 * processing the absolute value of the number.
 *
 * Return: The number of characters printed.
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
 * _print_unsigned_number - Prints an unsigned integer in decimal base.
 * @n: The unsigned integer to be printed.
 *
 * This function prints the provided unsigned integer using the '_putchar' function
 * for each digit. It handles the digits recursively.
 *
 * Return: The number of characters printed.
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
 * _print_hexadecimal - Prints an unsigned number in hexadecimal format.
 * @n: The unsigned number to be printed.
 * @uppercase: If non-zero, uses uppercase letters; otherwise, uses lowercase letters.
 *
 * This function prints the provided number in hexadecimal format (base 16). Recursion is used
 * to process each digit of the number. Hexadecimal letters are chosen based on the value of
 * 'uppercase'.
 *
 * Return: The number of characters printed.
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
 * _print_octal - Prints an unsigned integer in octal (base 8) format.
 * @n: The unsigned integer to be printed.
 *
 * This function prints the provided number in octal format (base 8). Recursion is used to
 * process each digit of the number.
 *
 * Return: The number of characters printed.
 */
int _print_octal(unsigned int n)
{
		if (n / 8)
			_print_octal(n / 8);
		_putchar(n % 8 + '0');
		return (0);
}
/**
 * _print_string - Prints a string of characters.
 * @s: The string to be printed.
 *
 * This function prints each character of the provided string using the '_putchar' function.
 * The string is printed until the null termninator ('\0') is encountered.
 *
 *
 * Return: The number of the characters printed.
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
