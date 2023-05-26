#include "main.h"

/**
 * aff_chr - afficher un caractère de type char
 * @args: la liste des parametres
 * @count: pointeur sur le caractere à aficher 
 * Return: void
 */
void aff_chr(va_list args, int *count)
{
	char ch = va_arg(args, int);
	*count += _putchar(ch);
}
