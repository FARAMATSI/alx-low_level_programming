#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	int res;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	res = n % 10;
	if (res > 5)
		printf("last digit of %d is %d and is greater than 5", n, res);
	else if (res == 0)
		printf("last digit of %d is %d and is 0", n, res);
	else if ((res < 6) && (res != 0))
		printf("last digit of %d is %d and is less than 6 and not 0", n, res);
	printf("\n");
	return (0);
}
