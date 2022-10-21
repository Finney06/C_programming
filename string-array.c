#include <stdio.h>
/**
*	main - Entry Point
*	Description: 'string as an array'
*	Return: Always 0 (Success)
**/

int main(void)
{
	char myName[] = "Finney";
	char firstCharacter = myName[5];

	printf("First Character: %c \n", firstCharacter);
	return (0);
}
