#include <stdio.h>

/**
 * runmain - insert the constructor attribute to runmain()
 * so as to be executed before main()
 */

void __attribute__ ((constructor)) runmain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
