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
    vector<char>v(26);
    for(int i=0;i<26;i++)
    {
        v[i]=(char)(i+'a');
    }
    string s;
    cin>>s;
    int q;
    cin>>q;
    while(q--)
    {
        char a, b;
        cin>>a>>b;
        for(int i=0;i<26;i++)
        {
            if(v[i]==a)
            {
                v[i]=b;
            }
        }

    }
    for(int i=0;i<n;i++)
    {
        s[i]=v[s[i]-'a'];
    }

    cout<<s<<endl;
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

