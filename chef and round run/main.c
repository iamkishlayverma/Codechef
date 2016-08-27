#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,count,j,k,l,x,z,flag;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        int a;
        scanf("%d",&a);
        int arr[a];
        for(j=1;j<=a;j++)
        {
            scanf("%d",&arr[j]);
        }
        for(j=1;j<=a;j++)
        {
            flag=0;
            k=j;
            x=-1;
            while(x!=j)
            {
                if(k==0)
                    k=k+arr[k+1]+1;
                else
                    k=k+arr[k]+1;
                flag++;
                if(k>a)
                {
                    k=((k-a)%a);
                    /*if(k==0)
                        k++;*/
                    x=k;
                }
                else
                {
                    x=k;
                }
                if(flag>a)
                {
                    count=count-1;
                    break;
                }
            }
            count++;

        }
        printf("%d\n",count);
    }
    return 0;
}
