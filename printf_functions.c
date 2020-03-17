void _puts(char *str)
{
        int stringcounter;

        for (stringcounter = 0; str[stringcounter] != \
		     '\0'; stringcounter++)
        {
                putchar(str[stringcounter]);
        }
}

char make_hex(/*long*/ int decimal)
{
	/*long int decimal;*/
	/*long*/ int remainder;
	/*long*/ int resultofdivision;
	int dividedby16;
	int mallocsize = 0;
	char *hexnumber;/* = malloc(19 * sizeof(char));*/
	/*char lengthofnumber;*/
	int addingchars;
	int printingchars;
	int lenofdecimal;
/*get length of integer*/

	for (lenofdecimal = 0; lenofdecimal != '\0'; lenofdecimal++)
	{
		mallocsize++;
	}

	hexnumber = malloc(mallocsize * sizeof(char));
/*then malloc size of char*/
/*if size is >19*/
/*return("error!! integer literal is too large")*/

	resultofdivision = /*va_arg(list, int)*/decimal;

	while (resultofdivision != 0)
	{
		dividedby16 = resultofdivision % 16;
		/* dividedby16 = 97 % 16*/

		if(dividedby16 < 10)
		{
			/*adds ascii value of 0 to the number*/
			dividedby16 += 48;
		}
		else 
			if(dividedby16 >= 10)
			{
				/*adds ascii value of 7 to the number*/
				dividedby16 += 55;
			}
		/*adds char to the index of hex numbers*/
		hexnumber[addingchars++]= dividedby16;

/*if this equals zero then the loop stops*/
		resultofdivision = resultofdivision / 16;
	}
	for(printingchars = addingchars - 1; printingchars >= 0; printingchars--)
	{
		putchar(hexnumber[printingchars]);
	}

    
	/*adding null byte to end of hexnumber array*/
	hexnumber[printingchars] = '\0';

	/*free the memory used for the char array of numbers*/
	free(hexnumber);
	/*return 0*/
	return 0;
}
