#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main(int argc, char **argv)
{
	int j = 0;
	j =  1;
	while(j < argc)
	{
		ft_putstr(argv[j]);
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
