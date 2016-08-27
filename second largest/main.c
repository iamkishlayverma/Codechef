#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && a>c)
        {
            if(b>c)
                printf("%d\n",b);
            else
                printf("%d\n",c);
        }
        else if(b>a && b>c)
        {
            if(a>c)
                printf("%d\n",a);
            else
                printf("%d\n",c);
        }
        else if(c>b && c>a)
        {
            if(b>a)
                printf("%d\n",b);
            else
                printf("%d\n",a);
        }

    }
    return 0;
}
