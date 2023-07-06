#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;

void solve()
{
	int n;cin>>n;
	int a[n];
	set<int>s;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s.insert(a[i]);
	}
	int k=(int)s.size();
	if(k<=n)
	{
		cout<<k<<endl;
	}
	else
	{
		cout<<n<<endl;
	}
}

signed main()enum name
{
	
};
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;cin>>t; while(t--)
	solve();
        return 0;
}