#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,x,y,z,c;
        scanf("%d",&a);
        x=a;
        while(x!=0)
        {
            y=x;
            x=y/10;
        }
        z=a%10;
        c=z+y;
        printf("%d\n",c);
    }
    return 0;
}
