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
const int N=2e5+5;

void solve()
{
    int n, m, k;
    cin>>n>>m>>k;
    string s;
    cin>>s;
    vector<string>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int ans=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(v[i][j]=='#')
            {
                continue;
            }
            int x=i, y=j;
            int it=0;

            while(it<k)
            {
                if(s[it]=='L')
                {
                    if(y-1 >= 0 && v[x][y-1] != '#')
                    {
                        y--;
                        it++;
                    }
                    else
                    {
                        break;
                    }
                }
                else if(s[it]=='R')
                {
                    if(y+1 < m && v[x][y+1] != '#')
                    {
                        y++;
                        it++;
                    }
                    else
                    {
                        break;
                    }
                }
                else if(s[it]=='U')
                {
                    if(x-1 >= 0 && v[x-1][y] != '#')
                    {
                        x--;
                        it++;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    if(x+1 < n && v[x+1][y] != '#')
                    {
                        x++;
                        it++;
                    }
                    else
                    {
                        break;
                    }
                }
                //it++;
            }

            if(it == k)
            {
                //cout<<i<<" "<<j<<endl;
                ans++;
            }
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

