#include <stdio.h>
int _printf(char *format, ...);
void _puts(char *str);


int main(void) {
	_printf("Hello World %s %%", "today" );
	return 0;
}

int _printf(char *format, ...)
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
				_puts(printer);
				format++;
				break;
			case '%':
				putchar(37);
				format++;
				break;
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

        for (stringcounter = 0; str[stringcounte\
r] != \
                     '\0'; stringcounter++)
	{
                putchar(str[stringcounter]);
        }
}
