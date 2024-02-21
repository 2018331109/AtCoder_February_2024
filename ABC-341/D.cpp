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
    int left=1, right=INF;
    int ans=-1; // Initialize ans with -1

    while(left<=right)
    {
        int mid=left+(right-left)/2ll;
        int a=mid/n, b=mid/m, c=mid/((n*m)/__gcd(n, m));
        int cnt=a+b-c-c;

        if(cnt>=k)
        {
            right=mid-1;
            ans=mid; // Update ans only when we find a valid solution
        }
        else
        {
            left=mid+1;
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

