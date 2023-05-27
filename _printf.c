#include "main.h"
/**
*_printf - affichage ta3 task 1
*@format: format inpute const ta3 char w safe
*Return: 3dad ta3 les carachter w maso9kach
*/
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args, format);
if (!format || (format[0] == '%' && !format[1]))
return (-1);
if (format[0] == '%' && format[1] == ' ' && !format[2])
return (-1);
while (*format)
{
if (*format == '%')
{
format++;
if (*format)
{
handle_formaty(args, &count, format);
format++;
}
}
else
{
_putchar(*format);
format++;
count++;
}
}
va_end(args);
return (count);
}
