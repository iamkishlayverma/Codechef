#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int i,j,t;
    cin >> t;
    for(i=0;i<t;i++)
    {
        int n,m,k,l,p,r=0,x;
        cin >> n >> m >> k;
        int a[m],b[k];
        for(j=0;j<m;j++)
        {
            cin >> a[j];
        }
        for(l=0;l<k;l++)
        {
            cin >> b[l];
        }
        std::vector<int> v(b,b+k);
        std::vector<int> v2(a,a+m);
        for(p=0;p<m;p++)
        {
            if(std::binary_search (v.begin(), v.end(), a[p]))
                r++;
        }
        int ci=0,q,c=0;
        for(q=1;q<=n;q++)
        {
            if(std::binary_search (v.begin(), v.end(),q) || std::binary_search (v2.begin(), v2.end(),q))
            {
                ci++;
            }
        }
        c=n-ci;
        cout << r << " "<< c << endl;
    }
    return 0;
}
