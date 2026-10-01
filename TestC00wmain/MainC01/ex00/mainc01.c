#include <stdio.h>
void	ft_ft(int *nbr);
int main(void)
{
	int j = 0;
	int *nbr = &j;

	ft_ft(nbr);
	printf("%d\n", j);
	return 0;
}
