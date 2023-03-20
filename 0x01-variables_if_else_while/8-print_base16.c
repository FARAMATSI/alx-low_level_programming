#include<stdio.h>
/**
* main - loop is printing the alphabet from z to a with lowercase
* Return: 0 (Success)
*/
int main(void)
{
	int a;
	char alpha;

	for (alpha = 48; alpha < 58; alpha++)
	putchar(alpha);
	for (a = 'a'; a <= 'f'; a++)
	putchar(a);
	putchar('\n')
	return (0);
}
