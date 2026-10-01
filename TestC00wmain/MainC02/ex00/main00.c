#include <stdio.h>
char *ft_strcpy(char *destination, char *source);
int main(void)
{
	char source[] = "salutcdsds";
	char destination[50];
	
	ft_strcpy(destination, source);
	
	printf("%s\n", destination);
	return 0;
}

int main(void)
{
	char s[100];
	printf("%s", ft_strcpy(s, "ddddd"));
}

