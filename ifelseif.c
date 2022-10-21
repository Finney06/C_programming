#include <stdio.h>
/**
*	main - Entry Point
*	Description: 'if-else-if function'
*	Return: Always 0 (Success)
**/
int main(void)
{
	int yourBath = 2;

	printf("How many times to you take your bath? ");
	scanf("%d", &yourBath);

if (yourBath == 0)
{
	printf("that's bad!\n");
}
else if (yourBath <= 5)
{
	printf("That's Okay\n");
}
else
{
	printf("Awesome\n");
}
	return (0);
}
