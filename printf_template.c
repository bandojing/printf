void _printfl(const char *format, ...)
{
	va_list list;

	va_start(list, format);

	if(*format == ‘%)
		(
			while (*format)
			{
				formatlength++;

				switch (*format)
				{

				case ’s’:
					stringtoprint = va_arg(list, char*);
					printstringfunction(stringtoprint, ?);
					format++;
					count characters = count characters + strlen(stringtoprint);
					break;


				case ‘i’:
					/*print integer*/

				case ‘d’:
					/*print integer*/

				case ‘u’:
					/*print unsigned int*/

				case ‘o’:
					/*print unsigned octal*/

				case ‘x’:
					/*print hexadecimal*/

				case ‘X’:
					/*print hexadecimall*/

				case ‘c’:
					/*print char*/

				case ‘p’:
					/*print address*/
				case ‘%’:
					/*print %*/

				case ‘r’:
					/*print r*/


				case ‘\0’:
					break;
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
			count characters++;
		}
			}
			va_end(list);

	return (character count);
