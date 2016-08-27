#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    unsigned long long int n,i,j;
    scanf("%llu",&n);
    unsigned long long int arr[n],x=n,y,z=0;
    for(i=0;i<n;i++)
    {
        scanf("%llu",&arr[i]);
    }
    sort(arr,arr+n);
    for(j=0;j<n;j++)
    {
        y=arr[j]*x;
        if(y>=z)
            z=y;
        x--;
    }
    printf("%llu\n",z);
    return 0;
}
