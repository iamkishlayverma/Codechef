#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int size,a=0,j,x,k,l,val;
        scanf("%d",&size);
        long long int arr[size];
        x=(size*(size-1))/2;
        long long int b[x];
        for(j=0;j<size;j++)
        {
            scanf("%lld",&arr[j]);
        }
        for(k=0;k<size;k++)
        {
            for(l=k+1;l<size;l++)
            {
                val=arr[k]+arr[l];
                b[a]=val;
                a++;
            }
        }
        int m,y;
        y=b[0];
        for(m=1;m<x;m++)
        {
            if(b[m]<y)
            {
                y=b[m];
            }
        }
        printf("%d\n",y);
    }
    return 0;
}
