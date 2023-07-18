#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;
typedef vector<int> vi;
using ii=pair<ll,ll>;

vector<ii> Factors(ll x)
{
	vector<ii>ans;
	for(ll i=2;i*i<=x;i++)
	{
		if(x%i==0)
		{
			int cnt=0;
			while(x%i==0)
			{
				cnt++;
				x/=i;
			}
			ans.push_back({i,cnt});
		}
	}
	if(x>1)
	{
		ans.push_back({x,1});
	}
	return ans;
}

bool issqrt(ll n)
{  
	int cnt=0;
	vector<ii>ans=Factors(n);
	for(auto k:ans)
	{
		if(k.second%2!=0)
		{
			cnt++;
		}
		
	}
	if(cnt==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool iscubrt(ll n)
{  
	 int cnt=0;
	vector<ii>ans=Factors(n);
	for(auto k:ans)
	{
		if(k.second%3!=0)
		{
		  cnt++;	
		}
	}
	if(cnt==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}





void solve()
{
  ll q,n;
  cin>>q>>n;
  if(q==1)
  { 
  	bool x=issqrt(n);
  	if(x==true)
  	{
  		cout<<"YES"<<endl;
  	}
  	else
  	{
  		cout<<"NO"<<endl;
  	}
  }
  if(q==2)
  {

  	bool x=iscubrt(n);
  	if(x==true)
  	{
  		cout<<"YES"<<endl;
  	}
  	else
  	{
  		cout<<"NO"<<endl;
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