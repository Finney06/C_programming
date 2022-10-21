#include <stdio.h>
/**
*	main - Entry Point
*	Description: 'scanf function'
*	Return: Always 0 (Success)
**/
int main(void)
{
	int youBath;

	printf("How many times do you bath?\n");
	scanf("%d", &youBath);

	printf("You bath: %d\n", youBath);
	return (0);
}
