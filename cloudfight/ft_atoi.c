#include <stdio.h>
#include <stdlib.h> 

int	ft_atoi(char *number)
{
	int num;
	int is_negative;

	is_negative = 1;
	num = 0;
	if(*number == '-')
	{
		is_negative = - 1;
		number ++;
	}

	while(*number != 0)
	{
		num = num * 10 + *number - '0';
		number ++;
	}
	return num * is_negative;
}

