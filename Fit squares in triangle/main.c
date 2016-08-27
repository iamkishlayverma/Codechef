#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int b,j,sum=0;
        scanf("%d",&b);
        j=(b/2)-1;
        if(j>0)
        {
            while(j!=0)
            {
                sum=sum+j;
                j--;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
