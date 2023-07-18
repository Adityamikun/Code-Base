#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;
typedef vector<ll> vi;

void solve()
{
	ll n;
	cin>>n;
	vi x;
	vi y;
	for(int i=0;i<n;i++)
	{
		ll a,b;
		cin>>a>>b;
		x.push_back(a);
		y.push_back(b);
	}
	sort(x.begin(),x.end());
	sort(y.begin(),y.end());
	ll sum=0;
	ll ans1=x[((x.size())/2)];
	ll ans2=y[((y.size())/2)];
	
	for(ll i=0;i<n;i++)
	{
		sum=sum+abs(x[i]-ans1)+abs(y[i]-ans2);
	}

	cout<<sum<<endl;

}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;cin>>t; while(t--)
	solve();
        return 0;
}