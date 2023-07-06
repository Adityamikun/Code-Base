#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
typedef vector<int> vi;

void solve()
{
   ll n,m;
   cin>>n>>m;
   vector<pair<int,int>> p(n);
   vector<pair<int,int>> q(m);
   
   set<ll> set1;
   set<ll> set2;
   map<ll,ll>mp;
   ll count=0;
   
   for(int i=0;i<n;i++)
   {
     ll x,y;
     cin>>x>>y;
     p[i]={x,y};
     mp[x*y]++;
   }
   
   for(int i=0;i<m;i++)
   {
     ll x,y;
     cin>>x>>y;
     q[i]={x,y};
     if(mp[x*y]!=0)
     {
        count++;
        mp[x*y]--;
     }
   }
   
  
   cout << count << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    
    while(t--)
        solve();
    
    return 0;
}
