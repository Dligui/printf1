#include "main.h"

/**
 * aff_bnr - printy lina unsigned int b forma ta3  binair
 * @i: hada howa int li araj3 lina
 * @count: kijam3 lina les poineter li f arry bach aff
 */
void aff_bnr(unsigned int n, int *count)
{
char bnr[100];
int z = 0;

if (n == 0)
{
putchar(0 + '0');
*count += 1;
return;
}

while (n > 0)
{
bnr[z] = (n % 2) + '0';
n /= 2;
z++;
}

for (z = z - 1; z >= 0; z--)
{
putchar(bnr[z]);
*count += 1;
}
}
