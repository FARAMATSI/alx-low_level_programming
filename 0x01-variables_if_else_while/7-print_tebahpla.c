#include<stdio.h>
/**
* main - loop is printing the alphabet from z to a with lowercase
* Return: 0 (Success)
*/
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	putchar(alpha);
	return (0);
}
