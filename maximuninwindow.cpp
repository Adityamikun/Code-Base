#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;

void solve()
{
  ll n,k;
  cin>>n>>k;
  vector<ll> arr(n);
  multiset<ll>s;
  for(int i=0;i<n;i++)
  {
  	cin>>arr[i];	
  }
  ll ans=0;
  ll head=-1;
  ll tail=0;
  ll cnt=1;
  

  while(tail<=n-k)
  {
  	while((head+1<n) && cnt<=k)
  	{
  		head++;
  		s.insert(arr[head]);
      cnt++;
  	}

  	ans=*s.rbegin();

  	if(tail<=head)
  	{
  		s.erase(s.find(arr[tail]));
      cnt--;
        tail++;
  	}
  	else
  	{
  		tail++;
  		head=tail-1;
  	}
       cout<<ans<<" ";
  }
  cout<<endl;
 
}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;cin>>t; while(t--)
	solve();
        return 0;
}