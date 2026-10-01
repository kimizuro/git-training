#include <unistd.h>
void ftNP(int j)
{
	if(j >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}
int main(void)
{
	ftNP(-42);
	ftNP(-42);
	ftNP(0);
	ftNP(42);
	return 0;
}
