#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{

	int c = 59;
	int d = 9;
	ft_ultimate_div_mod(&c, &d);
	printf("%d, %d", c, d);
	return 0;
}
