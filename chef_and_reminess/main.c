#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b,c,d;
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            c=a;
        }
        else
        {
            c=b;
        }
        d=a+b;
        printf("%d %d\n",c,d);
    }
    return 0;
}
