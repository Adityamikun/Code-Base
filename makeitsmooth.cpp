#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;
typedef vector<int> vi;

void solve()
{
  int n;cin>>n;
  vi a(n);
  for(int i=0;i<n;i++)
  {
  	cin>>a[i];
  }
  ll ans=0;
  for(int i=1;i<n;i++)
  {
  	if(a[i-1]>a[i])
  	{
  		ans=ans+a[i-1]-a[i];
  	}
  }
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