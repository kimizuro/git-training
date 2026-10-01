#include <stdio.h>

int main(void)
{
	char s1[] = "coucoub";
	char s2[] = "coucoua";
	printf("%d", ft_strncmp(s1, s2, 7));
	return (0);
}
