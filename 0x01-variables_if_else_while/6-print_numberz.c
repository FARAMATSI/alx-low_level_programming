#include<stdio.h>
/**
* main - loop is printing the one digit numbers from 1 to 9 with putchar
* Return: 0 (Success)
*/
int main(void)
{
	int i;
	int a;

	char alphas[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	for (a = 0; a <= 9; a++)
	putchar(alphas[a]);
	return (0);
}
