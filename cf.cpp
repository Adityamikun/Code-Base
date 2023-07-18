#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;
typedef vector<int> vi;

void solve()
{
  int n;cin>>n;
  int sum1=0,sum2=0,sum3=0;
  for(int i=0;i<n;i++)
  {
  	int x,y,z;
  	
  	cin>>x>>y>>z;
  	sum1+=x;
  	sum2+=y;
  	sum3+=z;
  }
  if(sum1==0 && sum2==0 && sum3==0)
  {
  	cout<<"YES"<<endl;
  }
  else
  {
  	cout<<"NO"<<endl;
  }
}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	solve();
        return 0;
}