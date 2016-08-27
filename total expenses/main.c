#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b;
        float c,ex;
        scanf("%d %d",&a,&b);
        if(a>1000)
        {
            c=a*b;
            ex=c-(c/10);
        }
        else
        {
            ex=a*b;
        }
        printf("%.6f\n",ex);

    }
    return 0;
}
