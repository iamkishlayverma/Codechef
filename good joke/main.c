#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int t,j,k,c=1;
        scanf("%d",&t);
        int a[t],b[t];
        for(j=0;j<t;j++)
        {
            scanf("%d %d",&a[j],&b[j]);
        }
        for(k=2;k<=t;k++)
        {
            c^=k;
        }
        printf("%d\n",c);
    }
    return 0;
}
