#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,m,n,k;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        int j;
        scanf("%d",&j);
        int count=0;
        for(k = 1;k < j;k++)
        {
            if(j%k == 0)
            {
                count++;
            }
        }
        if(count == 1)
        {
            printf("yes\n");
        }
        else
            printf("no\n");
    }
}

