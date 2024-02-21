#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back

unordered_map<int, int>mp;

int call(int n)
{
    if(n<2)
    {
        return 0;
    }
    if(mp[n])
    {
        return mp[n];
    }

    int cnt1=call(n/2ll);
    int cnt2=call(n-(n/2ll));

    return mp[n]=n+cnt1+cnt2;
}

void solve()
{
    int n;
    cin>>n;
    int ans=call(n);
    cout<<ans<<endl;

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

