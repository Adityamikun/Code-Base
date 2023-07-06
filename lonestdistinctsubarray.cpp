#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;

void solve()
{
  ll n;
  cin>>n;
 vector<ll> arr(n);
  map<ll,ll>mp;
  for(int i=0;i<n;i++)
  {
  	cin>>arr[i];
  	
  }
   ll ans=0;
  ll head=-1;
  ll tail=0;
  ll cnt=0;
 

  while(tail<n)
  {
  	while((head+1<n) && (mp[arr[head+1]]==0))
  	{
  		head++;
  		mp[arr[head]]++;
  		
  	}

  	ans=max(ans,head-tail+1);

  	if(tail<=head)
  	{
  		mp[arr[tail]]--;
  		
        tail++;
  	}
  	else
  	{
  		tail++;
  		head=tail-1;
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