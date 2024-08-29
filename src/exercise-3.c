
#include <stdio.h>

int main(void) {
	char x;   /* first value */
	char y;   /* second value */
	char max; /* maximum of the two values */

	scanf("%c", &x);
	scanf("%c", &y);

	if (x <= y)
		max = y;
	else
		max = x;

	printf("The maximum is %c.\n", max);

	return 0;
}
    