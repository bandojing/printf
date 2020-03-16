#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _printf(char *format,...);
void _puts_recursion(char *s);

int main(void) {
	printf("Hello %s %s %s World", "new", "new", "code");
	return 0;
}

void  printf_new(char *format, ...)
{
	char *printer;
	va_list list;

	va_start(list, format);

	while(*format)
	{
		if(*format == '%')
		{
			format++;
			switch(*format)
			{
			case 's':
				printer = va_arg(list, char *);
				_puts_recursion(printer);
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
}

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
