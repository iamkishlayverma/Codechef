#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int n,i,j;
    scanf("%llu",&n);
    for(i=0;i<n;i++)
    {
        unsigned long long int N,K;
        scanf("%llu %llu",&N,&K);
        unsigned long long int arr[N],a=0,x,y;
        for(j=0;j<N;j++)
        {
            scanf("%llu",&arr[j]);
            if(arr[j]<K)
            {
                a=a+(K-arr[j]);
            }
            else
            {
                x=arr[j]/K;
                y=arr[j]%K;
                if(y<=(K/2))
                {
                    a=a+arr[j]-(K*x);
                }
                else
                {
                    a=a+(K*(x+1)-arr[j]);
                }
            }
        }
        printf("%llu\n",a);
    }
    return 0;
}
