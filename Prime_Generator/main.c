#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,m,n,j,k;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%d %d",&m,&n);
        for(j = m;j <= n;j++)
        {
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
                printf("%d\n",j);
            }
        }
    }
}
