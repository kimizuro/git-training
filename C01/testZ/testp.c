#include <stdio.h>
void azer(int *ptr)
{
	*ptr = *ptr +1;
}
int main(void)
{

	int j = 10;
	int *ptr = &j;

	azer(ptr);
	printf("%d", j);
	return 0;
}

