#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float Area(int x1, int y1, int x2, int y2, int x3, int y3);

int main()
{
    int i,k,l,count=0,x=0,y=0;
    unsigned long long int n;
    scanf("%llu",&n);
    unsigned long long int a[n],b[n];
    for(i=1;i<=n;i++)
    {

        scanf("%llu %llu",&a[i],&b[i]);
        if(i>=3)
        {
            for(k=1;k<=i-1;k++)
            {
                for(l=k+1;l<=i-1;l++)
                {

                    if((Area(a[k],b[k],a[l],b[l],a[i],b[i])==Area(x,y,a[k],b[k],a[l],b[l])+Area(x,y,a[k],b[k],a[i],b[i])+Area(x,y,a[l],b[l],a[i],b[i])) && Area(x,y,a[k],b[k],a[l],b[l])!=0 && Area(x,y,a[k],b[k],a[i],b[i])!=0 && Area(x,y,a[l],b[l],a[i],b[i]) !=0)
                    {
                        count++;
                    }
                }
            }
            printf("%d\n",count);
            fflush(stdout);
        }
        else
           {
             printf("%llu\n",count)  ;
             fflush(stdout);
           }
    }
    return 0;
}

float Area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    float z;
    z=((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
    if(z<0)
        z=-z;
    return z;
}
