#include "main.h"
/**
 * handle_formaty - handles foraty is fenction
 * @args: list dyal les arg f had fnct
 * @cont: pointer dyal count f fonction handle formaty
 * @frmt: inpute fonction dyal had handle formaty
 *
 * Return: maso9kach
 */
void handle_formaty(va_list args, int *cont, const char *frmt)
{
switch (*frmt)
{
case 'c':
aff_chr(args, cont);
break;
case 's':
aff_stringy(args, cont);
break;
case 'd':
case 'i':
aff_intgr(args, cont);
break;
case 'b':
aff_bnr(va_arg(args, int), cont);
break;
break;
case '%':
aff_prcntg(cont);
break;
case 'S':
aff_string(args, cont);
break;
default:
aff_prcntg(cont);
_putchar(*frmt);
*cont += 1;
break;
}
}
