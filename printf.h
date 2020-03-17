#ifndef PRINTF_H
#define PRINTF_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
void _puts(char *str);
int _printf(char *format,...);
char make_hex( int decimal);
#endif
