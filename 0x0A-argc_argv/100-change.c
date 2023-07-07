#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: count
 * @argv: vector
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int price, cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	price = atoi(argv[1]);
	cent = 0;
	if (price > 25)
	{
		while (price >= 25)
			price -= 25, cent++;
	}
	if (price > 10 && price < 25)
	{
		while (price >= 10)
			price -= 10, cent++;
	}
	if (price > 5 && price < 10)
	{
		while (price >= 5)
			price -= 5, cent++;
	}
	if (price > 2 && price < 5)
	{
		while (price >= 2)
			price -= 2, cent++;
	}
	if (price == 1 || price == 2 || price == 5 || price == 10 || price == 25)
	{
		cent++;
	}
	printf("%d\n", cent);
	return (0);
}
