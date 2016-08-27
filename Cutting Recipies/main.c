#include <stdio.h>
#include <stdlib.h>
int max_array();
int main()
{
    int n,i,size,j,h;
    scanf("%d",&n);
    for(i=0;i<(n);i++)
    {
        scanf("%d",&size);
        int a[size],b[size],k,count=0,flag=0;
        for(j=0;j<size;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<size;j++)
        {
            b[j]=a[j];
        }
        for(j=0;j<size-1;j++)
                {
                     h=hcf(b[j],b[j+1]);
                     b[j+1]=h;
                }
               //printf("%d\n",h);
       for(k=0;k<size;k++)
        {
            printf("%d ",a[k]/h);
        }
        printf("\n");
    }
    return 0;
}

 int hcf(int a,int b)
         {
              if(a%b==0)
               {
                      return b;
               }
              else
              {
                      return(hcf(b,a%b));
              }
         }
