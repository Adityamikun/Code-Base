#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;
typedef vector<int> vi;
const ll mod=1e9+7;

ll binary_exponentiation(ll a, ll b, ll mod) {
    ll ans = 1;
    while (b) {
        if (b % 2 == 1) {
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b = b / 2;
    }
    return ans;
}

void solve()
{
  ll a,b;
  cin>>a>>b;
  ll c=(binary_exponentiation(b,mod-2,mod));
  ll ans=((a%mod)*(c%mod))%mod;
  cout<<ans<<endl;
}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;cin>>t; while(t--)
	solve();
        return 0;
}