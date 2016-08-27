#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    while(n--)
    {
        int a,c=0,count=0;
        scanf("%d",&a);
        int arr[a],j=1;
        for(i=0;i<a;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==arr[j])
                count++;
        }
        for(j=0;j<(a-1);j++)
        {
            for(k=j+1;k<a;k++)
            {
                if(arr[j]==arr[k])
                    count++;
            }
        }
        c=count*2;
        printf("%d\n",c);
    }
    return 0;
}
