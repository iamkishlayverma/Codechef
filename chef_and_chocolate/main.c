#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t,m,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&m,&n);
        if(((m*n)-1)%2==0)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
    return 0;
}
