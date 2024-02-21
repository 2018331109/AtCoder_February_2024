#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back

void solve()
{
     int a, b, d;
     cin>>a>>b>>d;
     for(int i=a;i<=b;i+=d)
     {
         cout<<i<<" ";
     }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    //cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
         solve();
    }

    return 0;
}

