int main(int argc, **char argv)
{
	char *dest;
	(void)argc;
	dest = ft_strdup(argv[1]);
	printf("chaine source : %s\n", argv[1]);
	printf("chaine dest : %s\n", dest);
	free(dest);
}
