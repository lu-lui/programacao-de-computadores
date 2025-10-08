#include <stdio.h>

int main()
{
	char s[20];
	int i;

	scanf("%d", &i);
	//scanf("%s", s);
	//scanf("%[^\n]s", s);
	scanf("%*s%[^\n]s", s);

	printf("%d\n%s\n", i, s);

	return 0;
}
