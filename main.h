#ifndef MAIN_H
#define MAIN_H

typedef struct prif
{
	char *prif;	// Utilisé pour stocker un spécificateur de format (par exemple, "%d", "%s", etc.)
	void (*f)(va_list args); // Pointeur vers une fonction qui prendra va_list comme argument
} prif_t;

/* Prototype de la function */

int _printf(const char *format, ...);

/* déclaration des fonctions pour chaque spécificateurs */
void print_char(va_list args);
void print_string(va_list args)
void print_percent(va_list args)



#endif
