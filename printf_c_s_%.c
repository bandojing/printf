int  _printf(char *format, ...)
{
        char *printer;
        va_list list;
        va_start(list, format);

        while(*format)
        {
                if(*format = '\\')
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
					case '%':
						 printer = va_arg(list, char)
						 putchar(printer);
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
