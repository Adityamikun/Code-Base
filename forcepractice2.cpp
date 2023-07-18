#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;
typedef vector<int> vi;

void solve()
{
  ll n,k,x;
  cin>>n>>k>>x;
  if(x!=1)
  {
  	cout<<"YES"<<endl;
  	cout<<n<<endl;
  	for(int i=0;i<n;i++)
  	{
  		cout<<1<<" ";
  	}
  	 cout<<endl;
  }
 else if(x==1)
  {
    if(k==2)
    {
    	int a=n%2;
    	int b=n/2;
    	if(a==0)
    	{
    		cout<<"YES"<<endl
    		cout<<b<<endl;
    		for(int i=0;i<b;i++)
    		{
    			cout<<2<<" ";
    		}
    		cout<<endl;

    	}
    	else
    	{
    		cout<<"NO"<<endl;
    	}
    }
    else
    {

    	if(k==1)
    	{
    		cout<<"NO"<<endl;
    	}
    	else
    	{
    	cout<<"YES"<<endl;
    	if(n%2)
    	{
    		int j=(n-3)/2;
    		cout<<j+1<<endl;
    		cout<<3<<" ";
    		for(int i=0;i<j;i++)
    		{
    			cout<<2<<" ";
    		}
    		cout<<endl;

    	}
    	else
    	{
    		int j=n/2;
    		cout<<j<<endl;
    		for(int i=0;i<j;i++)
    		{
    			cout<<2<<" ";
    		}
    		cout<<endl;

    	}
    }
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