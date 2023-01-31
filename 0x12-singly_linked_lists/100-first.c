#include "lists.h"

/**
 * myStartupFun - apply attribute so its printed before main
 */

void myStartupFun(void) _attribute_ ((constructor));

/**
 * myStartupFun - implementation
 */

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
