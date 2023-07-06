#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;
typedef vector<int> vi;

void solve()
{
  ll x,y;
  cin>>x>>y;
  ll ans=0;
  while(y>x)
  {
  	if(y%2)
  	{
  		y++;
  		ans++;
  	}
  	y/=2;
  	ans++;
  }
  ans+=(x-y);
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