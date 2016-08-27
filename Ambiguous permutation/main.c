#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,size;
    while(1)
    {
        int flag=1;
        scanf("%d",&size);
        if(size==0)
        {
            break;
        }
        int A[size+1],b[size+1];
        for(j=1;j<=size;j++)
        {
            scanf("%d",&A[j]);
            b[A[j]]=j;
        }
        for(j=1;j<=size;j++)
        {
            if(A[j]!=b[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
            printf("not ambiguous\n");
        else
            printf("ambiguous\n");
    }
    return 0;
}
