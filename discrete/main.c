#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;
    int n = 0;

    for(i = 1;i <= 20;i++)
    {
        for(j = 1;j <= i;j++)
        {
            for(k = 1;k <= j;k++)
            {
                printf("(%d*%d)+%d\n", i, j, k);
                n = n+1;
            }
        }
    }
    printf("%d", n);
    return 0;
}
