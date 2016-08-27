#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,m;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        if(m%2==0)
        {
            arr[i]=(m/2)+1;
        }
        else
        {
            arr[i]=(m+1)/2;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
