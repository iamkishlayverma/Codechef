#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,a1,b,b1,c,c1,d,d1,e,e1,f,f1,g,g1,h,h1,i,i1,j,j1,k,k1,l,l1,n,t,i2;
    scanf("%d",&t);
    for(i2=0;i2<t;i2++)
   {
        scanf("%d",&n);
        a=n/2048;
        a1=n%2048;
        b=a1/1024;
        b1=a1%1024;
        c=b1/512;
        c1=b1%512;
        d=c1/256;
        d1=c1%256;
        e=d1/128;
        e1=d1%128;
        f=e1/64;
        f1=e1%64;
        g=f1/32;
        g1=f1%32;
        h=g1/16;
        h1=g1%16;
        i=h1/8;
        i1=h1%8;
        j=i1/4;
        j1=i1%4;
        k=j1/2;
        k1=j1%2;
        l=k1/1;
        l1=k1%1;
        printf("%d\n",a+b+c+d+e+f+g+h+i+j+k+l);
   }
        return 0;
}
