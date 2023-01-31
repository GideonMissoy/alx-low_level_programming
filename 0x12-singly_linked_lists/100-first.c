#include "lists.h"

/**
 * theHair_tortoise - apply attribute so its printed before main
 */

void theHair_tortoise(void) _attribute_ ((constructor));

/**
 * theHair_tortoise - implementation
 */

void theHair_tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
