#include "main.h"
/**
 * aff_intgr - afficher une variable de type intiger
 * @args liste des parametres
 * @count: counter de type int
 * Return: null
 */

void aff_intgr(va_list args, int *count)
{
	int n = va_arg(args, int);
	int div = 1;
	int skp_zero = 1;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		*count += 1;
	}
	if (n == 0)
	{
		_putchar('0');
		*count += 1;
		return;
	}
	while (n / div > 0)
		div *= 10;
	while (div != 0)
	{
		int digit = n / div;
		n %= div;
		div /= 10;
		if (digit == 0 && skp_zero)
		continue;
		skp_zero = 0;
		_putchar(digit + '0');
		*count += 1;
	}
}
