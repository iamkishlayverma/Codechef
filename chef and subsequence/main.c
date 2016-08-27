#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,j,k,i,l;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int m;
        scanf("%d",&m);
        int b[m],c[m];
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[j]);
        }
        j=0,k=0;
        for(l=0;l<n;l++)
        {
            if(arr[l]==b[j])
            {
                c[k]=l;
                j++;
                k++;
            }
        }
        int flag=0,p;
        for(p=0;p<(m-1);p++)
        {
                int d=c[p+1]-c[p];
                if(d!=1)
                {
                    printf("No\n");
                    flag=1;
                    break;
                }
        }
        if(flag==0 && j==m)
            printf("Yes\n");
    }

    return 0;
}
