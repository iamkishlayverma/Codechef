#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        float x,y;
        x=sqrt(b*b-a*a);
        y=sqrt(b*b+a*a);
        printf("%.4f %.4f\n",x,y);
    }
    return 0;
}
