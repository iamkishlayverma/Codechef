#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char a[10]={0},b[10]={0};
        int flag=0,l,j;
        scanf("%s",a);
        scanf("%s",b);
        for(j=0;j<10;j++)
        {
               if((a[j]==b[j]) || (a[j]=='?' && b[j]!='?') || (a[j]!='?' && b[j]=='?'))
               {
                   flag++;
               }
        }
        if(flag==10)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
