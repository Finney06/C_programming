#include <stdio.h>

int main(void)
{
	char f,i,n,e,y;
	int age;
		
	printf("Enter your initials, followed by your age: ");
	scanf("%c %c %c %c %c %c %d", &f, &i, &n, &n, &e,&y, &age);
	printf("My initials are: %c%c%c%c%c%c and my age is %d.\n",f,i,n,n,e,y,age);
	return(0);
}
