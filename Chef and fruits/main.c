#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b,c,x,y;
        scanf("%d %d %d",&a,&b,&c);
        x=abs(a-b);
        if(c>x)
        {
            printf("%d\n",0);
        }
        else
        {
            if(a>b)
                printf("%d\n",abs(a-(b+c)));
            else
                printf("%d\n",abs(b-(a+c)));
        }
    }
    return 0;
}
