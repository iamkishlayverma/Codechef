#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int b[100000];
int main()
{
    int n,i,h,l;
    scanf("%d %d",&n,&h);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=0;
    do
    {
        scanf("%d",&b[j]);
        j++;
    }while(b[j]!=0);
    int c,k=0,p;
    for(l=0;l<j;l++)
    {
        switch(b[i])
        {
            case 1:j--;
            break;
            case 2:j++;
            break;
            case 3:if(c!=1)
                    {
                        arr[k]++;
                    }
                    break;
            case 4:if(b[k]<h)
                    {
                        arr[k]--;

                    }
                    else
                    {
                        continue;
                    }
                    break;
            case 5:exit(0);
                break;
        }
    }
    for(p=0;p<n;p++)
    {
        printf("%d\t",arr[p]);
    }
    return 0;
}
