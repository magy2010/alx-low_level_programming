#include"main.h"

/**
 * prints_alphabet_x10 - function that prints the alphabet 10 times
 * 
 *
*/

void print_alphabet_x10(void)

{
	int i;

	for (i = 1; i <= 10; i++)
	{
		char j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
	}

}
