#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,l=100000,c,j;
        scanf("%d",&a);
        int arr[a];
        for(j=0;j<a;j++)
        {
            scanf("%d",&arr[j]);
            if(arr[j]<l)
            {
                l=arr[j];
            }
        }
        c=l*(a-1);
        printf("%d\n",c);
    }
    return 0;
}
