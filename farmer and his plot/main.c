#include <stdio.h>
#include <stdlib.h>

int GCD(int a,int b);

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b,c,gcd,j,x,y,z;
        scanf("%d %d",&a,&b);
        if(a>b)
           gcd= GCD(a,b);
        else
           gcd= GCD(b,a);
        x=a*b;
        y=gcd*gcd;
        z=x/y;
        printf("%d\n",z);
    }
    return 0;
}

int GCD(int a,int b)
{
    if(b==0)
        return a;
    else
        return (GCD(b,a%b));
}
