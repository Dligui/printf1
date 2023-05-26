#include "main.h"
/**
 * aff_string - printy lina string b convert w safee hadchi li ban lya
 * @ag: lista ta3 les agrmnt
 * @c: kihassb lina int
 * Return: maso9akch hh
 */
void aff_string(va_list ag, int *c)
{
char *s = va_arg(ag, char*);
int z;
if (s == NULL)
{
s = "(null)";
}
for (z = 0; s[z] != '\0'; z++)
{
if ((s[z] > 0 && s[z] < 32) || (s[z] >= 127))
{
_putchar('\\');
_putchar('x');
if (s[z] < 16)
{
_putchar('0');
}
*cont += 2;
*cont += _printf("%X", s[z]);
}
else
{
_putchar(s[z]);
*count += 1;
}
}
}
