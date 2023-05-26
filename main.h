#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
void aff_bnr(unsigned int n, int *count);
void aff_prcntg(int *count);
void aff_stringy(va_list args, int *count);
void aff_chr(va_list args, int *count);
int _putchar(char c);
int _printf(const char *format, ...);
void aff_intgr(va_list args, int *count);
void handle_formaty(va_list args, int *count, const char *format);
void print_unsigned(va_list args, int *count);
void print_octal(va_list args, int *count);
void print_hex_lower(va_list args, int *count);
void print_hex_upper(va_list args, int *count);
void aff_string(va_list args, int *count);
int string(char *str);
#endif
