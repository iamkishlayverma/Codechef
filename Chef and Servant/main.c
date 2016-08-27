#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a<10)
            printf("What an obedient servant you are!\n");
        else
            printf("%d\n",-1);
    }
    return 0;
}
