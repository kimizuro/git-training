#include <unistd.h>
int main(void)
{
	char j = 'a';
	while(j <= 'z')
	{
		write(1, &j, 1);
		j++;
	}
}

