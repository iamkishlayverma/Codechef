#include <stdio.h>
#include <stdlib.h>
int count=0;
int main()
{
    int t,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int arr[n],j=0;
        while(j<n)
        {
            scanf("%d",&arr[j]);
            j++;
            for(j=0;j<n;j++)
            {
                k=j;
                a=arr[k];
                func(k,a,arr,j,n);
            }
        }

    }
    return 0;
}
int func(int k,int a,int *A,int j,int n)
{
    int b[n]={0};
    while(1)
    {
        k=k+a+1;
        if(k>(size-1))
        {
            k=k-size;
            b[k]++;
        }
        else if(k==j)
        {
            count++;
        }
        else
        {
            a=A[k];
        }
    }
}
