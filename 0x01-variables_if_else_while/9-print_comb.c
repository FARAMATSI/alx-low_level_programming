#include<stdio.h>
/**
* main - loop is printing the one digit numbers from 1 to 9 with putchar
* Return: 0 (Success)
*/
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
	putchar(a);
	if (a != 57)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
