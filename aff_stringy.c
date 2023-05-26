#include "main.h"

/**
 * aff_stringy - afficher une phrase
 * @args: une liste des parametres
 * @count: Pointeur
 * Return: void
 */
void aff_stringy(va_list args, int *count)
{
	char *s = va_arg(args, char *);
	int i;

	if (!s)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		*count += 1;
	}
}
