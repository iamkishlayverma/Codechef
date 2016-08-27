#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int o,p,s=0,j,count;
        scanf("%d %d",&o,&p);
        for(j=o;j<=p;j++)
        {
           count=palindrome(j);
           s=s+count;
        }
        printf("%d\n",s);
    }
    return 0;
}
int palindrome(int t)
{
    int b=t,a,sum=0;
    while(t!=0)
    {
        a=t%10;
        sum=(sum*10)+a;
        t=t/10;
    }
    if(sum==b)
    {
        return b;
    }
    else
        return 0;
}
