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
    string s;
    cin>>s;
    vector<int>v(26, 0);
    int ans=-1;
    for(int i=0;i<s.size();i++)
    {
        v[s[i]-'a']++;
    }
    for(int i=0;i<s.size();i++)
    {
        if(v[s[i]-'a']==1)
        {
            ans=i+1;
        }
    }
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

