#include <stdio.h>

int main(void)
{
    int i,j;

    i=0;
    while(i<3)
    {
        j=0;
        while(j<5)
        {
            printf("i -%d, j - %d\n",i,j);
            j=j+1;
        }
        i=i+1;

    }
    return(0);
}