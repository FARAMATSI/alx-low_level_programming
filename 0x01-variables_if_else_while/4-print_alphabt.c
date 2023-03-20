#include<stdio.h>
/**
* main - loop is printing the alphabet from a to z with lowercase
*  a-z is printed except for q and e
* Return: 0 (Success)
*/
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	if (alpha != 'q' && alpha != 'e')
	putchar(alpha);
	printf("\n");
	return (0);
}
