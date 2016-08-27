#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        float a,hra,da,z,y;
        int x;
        scanf("%f",&a);
        if(a<1500)
        {
            hra=a/10;
            da=(9*a)/10;
        }
        else
        {
            hra=500;
            da=(98*a)/100;
        }
        z=a+hra+da;
        x=(z*10);
        y=x%10;
        if(x>0)
            printf("%.1f\n",z);
        else
            printf("%d\n",z);
    }
    return 0;
}
