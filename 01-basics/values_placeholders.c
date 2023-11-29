#include <stdio.h>

/***************************************/
/*         Common Placeholders         */
/*     1. %d - Integers (whole numbers)*/
/*     2. %s - Strings                 */
/*     3. %f - Floating points values  */
/*     4. %c - Single character        */
/*     5. %% - The percent sign        */
/***************************************/

/**
 * main - Program entry point;
 * takes no arguments;
 *
 * first printf - takes in integer value;
 * second printf - takes in three integer values;
 * third printf - similar to 2nd one but passes math experession as parameter;
 * final printf - combines both the character and string implementation;
 *
 *
 * Return: has no return value;
 */
int main(void)
{
	printf("This is an integer value: %d\n", 18);
	printf("The obvious sum of %d + %d = %d\n", 2, 2, 4);
	printf("Sum result as an expression of %d + %d = %d\n", 3, 5, 3 + 5);
	printf("I have passion in becoming an experenced %c %s\n", 'C', "programmer");
	return (0);
}
