#include "main.h"
/**
 * aff_string - printy lina string b convert w safee hadchi li ban lya
 * @args: lista ta3 les agrmnt
 * @count: kihassb lina int
 * Return: maso9akch hh
 */
void aff_string(va_list args, int *count)
{
char *s = va_arg(args, char*);
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
*count += 2;
*count += _printf("%X", s[z]);
}
else
{
_putchar(s[z]);
*count += 1;
}
}
}
