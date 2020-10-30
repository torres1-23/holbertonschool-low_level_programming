#include <stdlib.h>

void beforemain(void) __attribute__ ((constructor));

/**
 * beforemain - prints something before the main function.
 */

void beforemain(void)
{
	printf("You're beat! and yet, you must allow\n");
	printf("I bore my house upon my back!\n");
}
