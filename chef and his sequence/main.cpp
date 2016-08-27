#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool isSubset(int*,int*,int,int);
int main()
{
    int n,i,k,l;
    cin >> n;
    for(i=0;i<n;i++)
    {
        int a,b;
        cin >> a;
        int arr[a];
        for(k=0;k<a;k++)
        {
            cin >> arr[k];
        }
        cin >> b;
        int arr2[b];
        for(l=0;l<b;l++)
        {
            cin >> arr2[k];
        }
        if(isSubset(arr,arr2,a,b))
                cout << "Yes" <<endl;
        else
                cout << "No" <<endl;
        }
    return 0;
}
bool isSubset(int arr1[], int arr2[], int m, int n)
{
    int i = 0;
    int j = 0;
    for (i=0; i<n; i++)
    {
        for (j = 0; j<m; j++)
        {
           if(arr2[i] == arr1[j])
              break;
        }
        if (j == m)
        {
                return 0;
        }
    }
    return 1;
}
