#include <stdio.h>
/**
*	main - Entry Point
*	Description: 'if-else"
*	Return: Always 0 (Success)
**/
int main(void)
{
	int age;

	printf("How old are you?\n");
	scanf("%d", &age);
if (age > 18)
{
	printf("You are above 18!\n");
}
else
{
	printf("You are below 18!\n");
}
	return (0);
}
