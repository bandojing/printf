#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _printf(char *format,...);
void _puts(char *str);

int main(void) {
	_printf("Hello %s%s%s World", "new", "new", "code");
	return 0;
}

int  _printf(char *format, ...)
{
	char *printer;
	va_list list;
	va_start(list, format);

	while(*format)
	{
		if(*format = '\\')
		{
		case 'n':
			putchar(10);
			format++;
			continue;

		if(*format == '%')
		{
			format++;
			switch(*format)
			{
			case 'x' || 'X':
				printer = va_arg(list, unsigned int);
				/*convert to hex*/
				format++;
				break;
			case 's':
				printer = va_arg(list, char *);
				_puts(printer);
				format++;
				break;
			case 'd':
				printer = va_arg(list, int);
				/*function to print integer*/
				format++;
				break;
			case 'i':
				printer = va_arg(list, int);
				/*function to print integer*/
				format++;
				break;
			case 'c':
				printer = va_arg(list, char);
				putchar(printer);
				format++;
				break;
			case 'p':
				printer = va_arg(list,);
				format++;
				break;
			case 'u':
				printer = va_arg(list, long)
					/*print long here*/
					format++;
				break;
			case 'o':
				printer = va_arg(list, ?);
				format++;
				break;
			case '\0':
				break;
			default:
				putchar('%');
				putchar(*format);
				format++;
			}
		}
		else
		{
			putchar(*format);
			format++;
		}
	}

	va_end(list);
	return (0);
}
void _puts(char *str)
{
	int stringcounter;

	for (stringcounter = 0; str[stringcounter] != '\0'; stringcounter++)
	{
		putchar(str[stringcounter]);
	}
}
