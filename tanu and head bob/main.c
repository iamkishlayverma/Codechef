#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,x=0,y=0,z=0;
        scanf("%d",&a);
        char arr[a];
        scanf("%s",arr);
        for(j=0;j<a;j++)
        {

            if(arr[j]=='N')
                x++;
            else if(arr[j]=='Y')
                y++;
            else if(arr[j]=='I')
                z++;
        }
            if(y>0)
              printf("NOT INDIAN\n");
            if(z>0)
               printf("INDIAN\n");
            if(x>=0 && y==0 && z==0)
                printf("NOT SURE\n");
    }
    return 0;
}
