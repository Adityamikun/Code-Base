#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;
typedef vector<int> vi;

void solve()
{
  int n;
  cin>>n;
  int a[n],b[n];
  map<float,int>mp;
  for(int i=0;i<n;i++)
  {
  	cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
  	cin>>b[i];
  }
  float c[n];
  int cnt=0;
  for(int i=0;i<n;i++)
  {  
  	if(a[i]==0)
  	{   
  		if(b[i]==0)
  		{
  			cnt++;
  		}
  		continue;
  	}
  	c[i]=((-1.0)*b[i])/a[i];
  	mp[c[i]]++;
  }
  int ans=-1e9;
  float value;
  for(auto it:mp)
  {
  	if(it.second>ans)
  	{
  		ans=it.second;
  		value=it.first;
  	}
  }

  cout<<fixed<<setprecision(0)<<ans+cnt<<endl;

}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;cin>>t; while(t--)
	solve();
        return 0;
}