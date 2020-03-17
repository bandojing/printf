#include <stdio.h>
#include <stdlib.h>
void to_octal(int decimal);


int main(void) {
	int decimal = 33;

	to_octal(decimal);
	return 0;
}

void to_octal(int decimal)
{
	int octal[100];
	int i = 1;

	while (decimal != 0)
	{
		octal[i] = decimal % 8;
		decimal = decimal / 8;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		putchar(octal[j]);
	}

}
