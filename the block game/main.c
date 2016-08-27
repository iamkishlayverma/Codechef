#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,sum=0,a,b;
        scanf("%d",&n);
        b=n;
        while(n!=0)
        {
            a=n%10;
            sum=(sum*10)+a;
            n=n/10;
        }
        if(sum==b)
            printf("wins\n");
        else
            printf("losses\n");
    }
    return 0;
}
