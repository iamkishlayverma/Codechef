#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,j=0,l;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        c[i]=(a[i]-b[i]);
        if(j<abs(c[i]))
        {
            j=abs(c[i]);
            if(c[i]>0)
            {
                l=1;
            }
            else
            {
                l=2;
            }
        }
    }
    printf("%d\t%d",l,j);
    return 0;
}
