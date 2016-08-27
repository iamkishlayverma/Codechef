#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b,c,x=0;
        scanf("%d %d",&a,&b);
        for(j=1;j<=b;j++)
        {
            c=a%j;
            if(c>x)
               x=c;
        }
        printf("%d\n",x);
    }
    return 0;
}
