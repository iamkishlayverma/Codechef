#include <iostream>

using namespace std;

int main()
{
    int n,i,c,t,j,k;
    cin >> n;
    for(i=0;i<n;i++)
    {
        c=1;
        cin >> t;
        int a[t],b[t];
        for(j=0;j<t;j++)
        {
            cin >> a[j] >> b[j];
        }
        for(k=2;k<=n;k++)
        {
            c^=k;
        }
        cout << c << endl;
    }
    return 0;
}
