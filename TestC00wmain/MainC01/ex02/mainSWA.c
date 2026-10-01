#include <stdio.h>

void ft_swap(int *a, int *b);
int main(void)
{
	int c = 10;
	int d = 5;
	ft_swap(&c, &d);
	printf("c = %d d = %d\n", c, d);
	return (0);
}
