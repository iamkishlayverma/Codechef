#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,b,i,num;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        while(num!=0)
        {
            b=num%10;
            sum=(sum*10)+b;
            num=num/10;
        }
        printf("%d\n",sum);
        sum=0;
    }
}
