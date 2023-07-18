#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;
typedef vector<ll> vi;

void solve()
{

  vi v(3);
  vi k(3);
  for(int i=0;i<3;i++)
  {
  	ll x,y;
  	cin>>x>>y;
  	v[i]=x;
  	k[i]=y;
  }
  ll pansx=v[0];
 ll pansy=k[0];
  sort(v.begin(),v.end());
  sort(k.begin(),k.end());
 ll ans=abs(pansx-v[1])+abs(pansy-k[1]);
 cout<<ans+1<<endl;

}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;cin>>t; while(t--)
	solve();
        return 0;
}