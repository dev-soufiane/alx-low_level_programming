#include <stdlib.h>
#include "main.h"

/***/

int main(int argc, char *argv[])
{
    int sum, i, x;
    char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    sum = 0;

    if (argc == 1)
        {
            printf("0\n");
    }

    for (i = 1; i < argc; i++)
        {
            for (x = 0; x < 10; x++)
            {
                if (argv[i] != numbers[x])
                {
                    printf("Error\n");
                    return (1);
                }

                else
                    {
                        sum += atoi(argv[i]);
                    }
            }
        }
        
    printf("%d\n", sum);

    return (0);
}
