#include <stdio.h>
#include <stdlib.h>

#define N 4000000

int main(void)
{
    unsigned int a = 1;
    unsigned int b = 1;
    unsigned int next = 0;
    unsigned int sum = 0;

    while(next <= N)
    {
        next = a + b;

        if(next % 2 == 0)
        {
            sum += next;
        }

        /* shift along */
        a = b;
        b = next;
    }

    printf("%d\n", sum);

    return EXIT_SUCCESS;
}

