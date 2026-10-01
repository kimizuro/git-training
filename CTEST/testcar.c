#include <unistd.h>
void ewrrwe(char c)
{
	write(1, &c, 1);
}
int main(void)
{
	ewrrwe('5');
	return 0;
}
