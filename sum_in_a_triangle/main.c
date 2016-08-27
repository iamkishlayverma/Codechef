#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,j,k,i,x;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int arr[n][n];
        for(j=0;j<n;j++)
        {
            for(k=0;k<=j;k++)
            {
                scanf("%d",&arr[j][k]);
            }
        }
        x=arr[0][0];
        for(j=1;j<n;j++)
        {
            for(k=0;k<=j;k++)
            {
                if(arr[j][k+1]>arr[j+1][k+1])
                {
                    x=x+arr[j][k+1];
                }
                else
                {
                    x=x+arr[j+1][k+1];
                }
            }
        }
        printf("%d\n",x);
    }
    return 0;
}
