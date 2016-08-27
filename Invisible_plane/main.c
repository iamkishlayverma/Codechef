#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,q,l=0,j=0;
    scanf("%d %d",&n,&q);
    long int a[n];
    while(l < n)
    {
        scanf("%ld",&a[l]);
        l++;
    }
    while(j < q)
        {
        long int i,r,x,k = 0,sum = 0,z=0,s;
        scanf("%ld %ld %ld",&i,&r,&x);
        while(a[k] != i)
        {
            k++;
        }
        while(a[z] != r)
        {
            z++;
        }
        int t = k;
        while(t <= z)
        {
            if(a[t] <= x)
            {
                sum = sum + a[t];
            }
            t++;
        }
        if(sum == 0)
        {
            printf("%ld%ld\n",x,x);
        }
        else
        {
            printf("%ld\n",sum);
        }
    j++;
    }
    return 0;
}
