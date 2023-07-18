#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;
typedef vector<int> vi;

void solve()
{
  int n;cin>>n;
  ll a[n];
  map<ll,ll>mp;
  for(int i=0;i<n;i++)
  {
  	cin>>a[i];
  	mp[a[i]]++;
  }
 ll ans=-1e9;
  for(auto k:mp)
  {
  	ans=max(ans,k.second);
  }
  if(ans<=(n/2))
  {
    cout<<n<<endl;
  }
  else
  {
    ll m=n-ans;
    ll p=abs(m-ans);  //m<=n/2,ans>=n/2,p=ans-m,ans1=2*(n-ans)
    ll ans1=n-p;
    cout<<ans1<<endl; //ans1=2*(n-ans)
  }

}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;cin>>t; while(t--)
	solve();
        return 0;
}