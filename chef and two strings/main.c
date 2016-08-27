#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char a[100],b[100];
        int min=0,max=0,l,j;
        scanf("%s",a);
        scanf("%s",b);
        l=strlen(a);
        for(j=0;j<l;j++)
        {
            if(a[j]!='?' && b[j]!='?' && a[j]!=b[j])
            {
                min++;
            }
            if(a[j]=='?' && b[j]!='?' || a[j]!='?' && b[j]=='?' || a[j]=='?' && b[j]=='?')
            {
                max++;
            }
        }
        printf("%d %d\n",min,(max+min));
    }
    return 0;
}
