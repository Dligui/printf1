#include "main.h"

/**
 * aff_bnr - printy lina unsigned int b forma ta3  binair
 * @it: hada howa int li araj3 lina
 * @c: kijam3 lina les poineter li f arry bach aff
 */
void aff_bnr(unsigned int it, int *c)
{
char bnr[100];
int z = 0;

if (it == 0)
{
putchar(0 + '0');
*c += 1;
return;
}

while (it > 0)
{
bnr[z] = (it % 2) + '0';
it /= 2;
z++;
}

for (z = z - 1; z >= 0; z--)
{
putchar(bnr[z]);
*c += 1;
}
}
