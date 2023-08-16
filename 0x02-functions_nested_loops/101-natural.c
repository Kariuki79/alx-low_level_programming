#include <stdio.h>

/**
* main - list natural numbers that are multiples of 3 or  5
* Return: 0
*/
int main(void)
{
        int j, k = 0;
        while (j < 1024)
        {
                if ((j % 3 == 0) || (j % 5 == 0))
                {
                        k += j;
                }
                j++;
        }
        printf("%d\n", k);
        return(0);
}
