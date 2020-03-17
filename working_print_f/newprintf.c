#include <stdio.h>
#include <stdarg.h>
#include <stdalib.h>
#include <string.h>

int  _printf(char *format, ...);
void _puts(char *str);
int _print_int(va_list ls);

int main(void)
{
	_printf("%s %% %c ", "hello everybody", 'X');
	return (0);
}
/**
 * _printf - variatic function that prints strings characters and %
 * @format: character pointer to a formatted string
(* a blank line
* Description: variatic function that prints formatted string
*in addition to  strings characters and %
(* section header: Section description)*
* Return: returns 0
*/
int  _printf(char *format, ...)
{
	int PrintInteger;
	char *printer;
	va_list list;
	char chara;

	va_start(list, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 's':
				printer = va_arg(list, char *);
				_puts(printer);
				format++;
				break;

			case 'c':
				chara = va_arg(list, int);
				putchar(chara);
				format++;
				break;

			case '%':
				putchar('%');
				format++;
				break;
			case '\0':
				break;
			default:
				putchar(*format);
				format++;
			}
		}
		else
			putchar(*format);
		format++;
	}

	va_end(list);

	return (0);
}
/**
 * _puts - function that prints a string
 * @str: pointer to a string, this is the string thats passed in to function
(* a blank line
* Description: prints out the string passed to it
(* section header: Section description)*
* Return: returns void
*/
void _puts(char *str)
{
	int stringcounter;

	for (stringcounter = 0; str[stringcounter] != '\0'; stringcounter++)
	{
		putchar(str[stringcounter]);
	}
}
