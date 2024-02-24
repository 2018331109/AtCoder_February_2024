#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF=1e18;
const int N=1e6+6;
const int md=998244353;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]]=i;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int a, b;
        cin>>a>>b;
        if(mp[a]<mp[b])
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<b<<endl;
        }
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

