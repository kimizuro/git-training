#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int	i = 17;
	int	j = 3;
	ft_div_mod(17, 3, &i, &j);
	printf("%d, %d\n", i, j);
	return 0;
}


