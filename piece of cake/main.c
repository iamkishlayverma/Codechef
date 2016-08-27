#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char a[50];
        int d,b[123]={0},flag=0,l,j,k;
        scanf("%s",a);
        l=strlen(a);
        for(k=0;k<l;k++)
        {
            d=a[k];
            b[d]++;
        }
        if(l%2==0)
        {
                l=l/2;
            for(j=97;j<=122;j++)
            {
                if(b[j]==l)
                {
                    flag++;
                    break;
                }
            }
            if(flag>0)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
