#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a1,a2,a3,b1,b2,b3;
        float j,x,y,z;
        scanf("%f",&j);
        scanf("%d %d",&a1,&b1);
        scanf("%d %d",&a2,&b2);
        scanf("%d %d",&a3,&b3);
        x=sqrt((a2-a1)*(a2-a1)+(b2-b1)*(b2-b1));
        y=sqrt((a3-a2)*(a3-a2)+(b3-b2)*(b3-b2));
        z=sqrt((a3-a1)*(a3-a1)+(b3-b1)*(b3-b1));
        if(x<=j && y<=j && z<=j)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
