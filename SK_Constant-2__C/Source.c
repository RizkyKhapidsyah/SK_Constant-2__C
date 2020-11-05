#include <stdio.h>
#include <conio.h>

#define INPUT_MAX 64

int main()
{
	char input[INPUT_MAX];

	printf("Instructions: ");
	fgets(input, INPUT_MAX, stdin);
	puts("Thank you! Here are your instructions:");
	puts(input);

	_getch();
	return(0);
}