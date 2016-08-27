#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i,j,l,k,x=0;
    scanf("%d %d %d",&a,&b,&c);
    int arr[a],brr[c];
    for(i=0;i<a;i++)
        scanf("%d",&arr[i]);
    for(j=0;j<c;j++)
        scanf("%d",&brr[j]);
    while(b--)
    {
        j=a-1;
        for(k=1;k<a;k++)
        {
            x=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=x;
            j--;
        }
    }
    for(l=0;l<c;l++)
    {
        printf("%d\n",arr[brr[l]]);
    }
    return 0;
}
