#include <stdio.h>

void tortoiseAndHare(void) __attribute__ ((constructor));

/**
 * tortoiseAndHare - prints string before main method
 * Return: nothing
 **/
void tortoiseAndHare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

