#include<stdio.h>
/**
* main - First loop is printing the alphabet from a to z with lowercase
* Second loop is printing the alphabet from A to Z with Uppercase
* Return: 0 (Success)
*/
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	putchar(alpha);
	printf("\n");
	return (0);
}
