#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,count=0,j;
        scanf("%d",&a);
        int arr[a];
        for(j=0;j<a;j++)
        {
            scanf("%d",&arr[j]);
        }

        printf("%d\n",count);
    }
    return 0;
}
