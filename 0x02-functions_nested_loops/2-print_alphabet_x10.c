#include"main.h"

/**
 * main  prints_alphabet_×10 - function that will print the alphabet 10 times
 *
*/

void print_alphabet_×10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
