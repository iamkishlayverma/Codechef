#include <stdio.h>
#include <stdlib.h>
int max(int *arr,int k,int l);

int main()
{
   unsigned long long int N;
   scanf("%llu",&N);
   unsigned long long int arr[N],i,k,maxi,l,sum=0;
   for(i=0;i<N;i++)
   {
       scanf("%llu",&arr[i]);
   }

   for(k=0;k<(N-1);k++)
   {
       for(l=k+1;l<N;l++)
       {
           if(((arr[k] & arr[l]) == arr[k]) || ((arr[k] & arr[l]) == arr[l]))
           {
               maxi=arr[k];
               for(i=k+1;i<=l;i++)
                {
                    if(arr[i]>maxi)
                    maxi=arr[i];
                }
               sum+=maxi;
           }
       }
   }
        printf("%llu",sum);

return 0;
}
