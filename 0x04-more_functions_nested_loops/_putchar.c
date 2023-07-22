#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The characterto print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set approprately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
