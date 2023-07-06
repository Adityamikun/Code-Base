#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;
typedef vector<int> vi;

void solve()
{
  int n,q;
  cin>>n>>q;
  map<int,int>mp;
  int count=0;
  while(q--)
  {
  	int a;
  	cin>>a;
  	if(a==1)
  	{
  		int x;
  		cin>>x;
  		count++;
  		mp[x]++;
  	}
  	if(a==2)
  	{
  		int z;
  		cin>>z;
  		if(count>mp[z])
  		{
  			count=count-mp[z];
  		}
  		mp[z]=0;
  	}
  	if(a==3)
  	{
  		int y;
  		cin>>y;
  		count=count-y;
  	}
  	cout<<count<<endl;
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