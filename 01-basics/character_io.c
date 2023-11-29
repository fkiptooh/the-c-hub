#include <stdio.h>
/**
 * main - Programs entry point;
 * takes no arguments;
 * exploring the fgets function for fetchings string in place of scanf;
 *
 * Return: null;
 */
int main(void)
{
	char name[64];

	printf("Enter your name: ");
	fgets(name, 64, stdin);
	printf("Your name is: %s\n", name);
	return (0);
}
