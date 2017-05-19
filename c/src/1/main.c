#include <stdio.h>
#include <stdlib.h>

#define N 1000

int main(void)
{
    unsigned int sum = 0;

    for(unsigned int i=0;i<N;i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    
    printf("%d\n", sum);
}

