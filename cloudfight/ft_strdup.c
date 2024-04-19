#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(*str != 0)
    {
        i ++;
        str ++;
    }
    return (i);
}


char *ft_strdup(char *s1)
{
	char *stringcopy;
	int i;
	int size;
	
	i = 0;
	size = ft_strlen(s1);
	stringcopy = (char *) malloc (size);
	if(stringcopy == 0)
		return 0;
	while(i < size)
	{
		stringcopy[i] = s1[i];
		i ++;
	}
	return stringcopy;
}

// int	main(void)
// {
// 	char *string1 = "hallo";

// 	printf("%s\n", ft_strdup(string1));

// 		char *string2 = "hallo";

// 	printf("%s",  strdup(string2));
// }