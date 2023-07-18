#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;
typedef vector<int> vi;

void solve()
{
  string s;
  cin>>s;
  int q;
  cin>>q;
  map<char,int>mp;
  while(q--)
  {
  	int x;
  	cin>>x;
  	if(x==1)
  		{
  			int i;
  			
  			char c;
  			cin>>i>>c;
  			i--;
  			mp[s[i]]--;
  			s[i]=c;
  			mp[s[i]]++;

  		}
  		if(x==2)
  		{
  			int l,r;
  			cin>>l>>r;
            l--;r--;
  			int cnt=0;
  			for(int i=l;i<=r;i++)
  			{
  				if(mp[s[i]]==1)
  				{
  					cnt++;
  				}
  			}
  			cout<<cnt<<endl;
  		}
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