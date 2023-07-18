#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;
typedef vector<int> vi;

void solve()
{
  int n,count=0;
  cin>>n;
  for(int i=0;i<n;i++)
  { 
  	int a,b;
  	cin>>a>>b;
  	if(a>b)
  	{
  		count++;
  	}
  }
  cout<<count<<endl;
}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;cin>>t; while(t--)
	solve();
        return 0;
}