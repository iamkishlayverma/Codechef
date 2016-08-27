#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a>0 && b>0 && c>0)
        {
            if(a+b+c==180)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
