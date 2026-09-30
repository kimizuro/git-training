#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	// 1. On parcourt le tableau d'arguments jusqu'a argc(ou argv[i] != NULL)
	while (i < argc)
	{
		j = 0;
		// 2. On parcourt la chaine argv[i] jusqu'au '\0' final
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
