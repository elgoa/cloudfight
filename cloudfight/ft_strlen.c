#include <stdio.h>
#include <string.h>

unsigned long ft_strlen(char const *str)
{
    unsigned long i;

    i = 0;
    while(*str != 0)
    {
        i ++;
        str ++;
    }
    return (i);
}

// int main (void){
//    printf("%lu", ft_strlen("cjkabkdbab"));
//    printf("%lu", strlen("cjkabkdbab"));
// }