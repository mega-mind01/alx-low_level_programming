#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Returns 0
 */

int main(void)
{
	int pass[100];
	int i, k, l;

	k = 0;
	srand(time(NULL));
	for (i = 0; 1 < 100; i++)
	{
		pass[i] = rand() % 78;
		k += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - k) - '0' < 78)
		{
			l = 2772 - k - '0';
			k += l;
			putchar(l + '0');
			break;
		}
	}
	return (0);
}
