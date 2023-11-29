/******************************************/
/*            Variables                   */
/*         1. age changing                */
/*         2. pi calculation              */
/*         3. character assignments       */
/******************************************/

#include <stdio.h>
/**
 * main - Entry point;
 * takes no args;
 *
 * Return: null;
 */
int main(void)
{
	int age;
	char x, y, z;
	float pi;

	age = 17;
	x = 'A';
	y = 'B';
	z = 'C';
	pi = 22.0 / 7.0;
	printf("She is %d years old now\n", age);
	age = 19;
	printf("She will be %d years old in two years time\n", age);
	printf("It is easy as %c%c%c\n", x, y, z);
	printf("The value of pi is: %f.\n", pi);
	return (0);
}
