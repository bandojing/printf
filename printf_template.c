void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}


void _printfl(const char *format, ...)
{
	va_list list;

	va_start(list, format);

			while (*format)
			{
				if(*format);
				{

				format++;

				switch (*format)
				{

				case ’s’:
					stringtoprint = va_arg(list, char*);
					_puts_recurstion(stringtoprint);
					format++;
					count characters = count characters + strlen(stringtoprint);
					break;


					/*case ‘i’:*/
					/*print integer*/

				/*case ‘d’:*/
					/*print integer*/

					/*case ‘u’:*/
					/*print unsigned int*/

					/*case ‘o’:*/
					/*print unsigned octal*/

				/*case ‘x’:*/
					/*print hexadecimal*/

				/*case ‘X’:*/
					/*print hexadecimall*/

					/*case ‘c’:*/
					/*print char*/

					/*case ‘p’:*/
					/*print address*/
					/*case ‘%’:*/
					/*print %*/

					/*case ‘r’:*/
					/*print r*/


					/*case ‘\0’:*/
					  /*break;*/
				default:
					_putchar(‘%’);
					_putchar(*format);
					stringtoprint++;
					count characters = count characters + 2;
				}
			}
			Else
		{
			_putchar(*format);
			format++;
			/*count characters++;*/
		}
			}
			va_end(list);

/*	return (character count);*/
