#include "libft.h"

char *unpassword(char *argv)
{
	int i;
	i = 0;
	while(argv[i])
	{
		if (argv[i] >= 'a' && argv[i] <= 'z')
			argv[i] = (argv[i] - 'a' - 13) % 26 + 'a';
		else if (argv[i] >= 'A' && argv[i] <= 'Z')
			argv[i] = (argv[i] - 'A' - 13) % 26 + 'A';
		i++;
	}
	return (argv);
}
