#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;
typedef vector<int> vi;

void solve()
{
   int n,q;
   cin>>n>>q;
   vi a(n);
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   sort(a.begin(),a.end());

    for(int i=1;i<n;i++)
   {
   	a[i]=a[i]+a[i-1];
   }
   while(q--)
   {
   int ans,m;
   cin>>m;
     ans=(upper_bound(a.begin(),a.end(),m)-a.begin());
   cout<<ans<<endl;
   }
}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	solve();
        return 0;
}