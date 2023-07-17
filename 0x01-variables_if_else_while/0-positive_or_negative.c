#include <stdio.h>
#include <stdlib.h>>
#include <time.h>
/**
*main: Entry point
*
*Return: Always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (num < 0) {
		printf("number is negative%d\n",n);
        } else if (num > 0) {
		printf("number is positive%d\n",n);
	} else {
		printf("number is zero%d\n",n);
	}
	return (0);
}
