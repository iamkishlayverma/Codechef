#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i,l;
    scanf("%d",&n);
    while(n--)
    {
        char a[100];
        int cb=0,ca=0;
        scanf("%s",a);
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]=='b')
                cb++;
            else
                ca++;
        }
        if(cb>ca)
            printf("%d\n",ca);
        else
            printf("%d\n",cb);
    }
    return 0;
}
