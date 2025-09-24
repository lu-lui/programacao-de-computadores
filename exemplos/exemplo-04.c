#include <stdio.h>
int main()
{
	unsigned char x;

	x = 7;
	printf("%d", x);
	x = x << 1;
	printf("\n%d", x);
	x = x << 3;
	printf("\n%d", x);
	x = x << 2;
	printf("\n%d", x);
	x = x >> 1;
	printf("\n%d", x);
	x = x >> 2;
	printf("\n%d", x);
	x = ~x;
	printf("\n%d", x);
	return 0;
}
