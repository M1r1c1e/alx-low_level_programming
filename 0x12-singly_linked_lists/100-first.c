#include <stdio.h>

/**
 * pre_main - Function that can print a message before main is executed.
 * This function is attributed with __attribute__ ((constructor)),
 * so it will be executed before main.
 */
void __attribute__ ((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}

