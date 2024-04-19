#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line.h"


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

	while(*number != 0 && *number != ' ')
	{
       // printf("%c", *number);
        num = num * 10 + *number - '0';
		number ++;
	}
    printf("%d \n", num);
	return num * is_negative;
}

int main() {
    char *array[1000];
    int i = 0;
    int fd = open("level1_1.txt", O_RDONLY);
    
    if (fd == -1) {
        perror("Fehler beim Öffnen der Datei");
        exit(EXIT_FAILURE);
    }
    
    // Hier kannst du weitere Operationen mit der geöffneten Datei durchführen
    
    // Lese eine Zeile aus der Datei
    
    array[i] = get_next_line(fd);
    char space = ' ';
    
    while(array[i] != 0)
    {
            i ++;
            array[i] = get_next_line(fd);
            
    }
    i = 0;

    while(array[i] != 0)
    {
        printf("%s", array[i]);
        i ++;
    }
    i = 0;
    
    int *number_array[1000];
    while(array[i] != 0)
    {
        int j = 0;
        int len = ft_strlen(array[i]);
        number_array[i] = malloc (1000 * sizeof (int));
        while( j < len)
        {
            number_array[i][j] = ft_atoi(&array[i][j]);
            j ++;
        }
        i ++;
    }

    i = 0;
    int j = 0;
    // while(i < ft_strlen(array[i]))
    // {
    //     while( j < 10)
    //     {
    //         printf("%d ", number_array[i][j]);
    //         j ++;
    //     }
    //     printf("\n");
    //     j = 0;
    //     i ++;
    // }
   
    
    return 0;
}

// int main() {
	
// 	char **array;
// 	int i = 0;
//     // Öffne die Datei "level1_1.in" mit dem Dateideskriptor fd
//     int fd = open("level1_1.txt", O_RDONLY);
    
//     if (fd == -1) {
		
//         perror("Fehler beim Öffnen der Datei");
//         exit(EXIT_FAILURE);
//     }
    
//     // Hier kannst du weitere Operationen mit der geöffneten Datei durchführen
    
//     // Schließe die Datei, wenn du fertig bist
//     if (close(fd) == -1) {
//         perror("Fehler beim Schließen der Datei");
//         exit(EXIT_FAILURE);
//     }

// 	array = malloc (sizeof(char *));
// 	array[i] = get_next_line(fd);
// 	printf("%s", array[i]);
//     while (array[i] != NULL) {
		
//         i++;
//         // Überprüfen, ob das Array vergrößert werden muss
      
//             char **temp = realloc(array, (i + 1) * sizeof(char *));
//             if (temp == NULL) {
//                 // Handle error
//                 return 1;
//             }
//             array = temp;
//         }
    

//     // Am Ende sicherstellen, dass das Array mit NULL beendet ist
//     array[i] = NULL;
// 	i = 0;
// 	while(array[i] != 0)
// 	{
// 		printf("test0");
// 		printf("%s", array[i]);
// 		i ++;
// 	}
// }