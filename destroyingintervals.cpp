#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;
typedef vector<int> vi;


bool comparePairs(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
}

void solve()
{
  ll n;
  cin>>n;
  ll a[n],b[n];
  map<ll,ll>mp;
  
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    mp[a[i]]++;
  }
  for(int i=0;i<n;i++)
  {
    cin>>b[i];
    mp[b[i]]++;
  }
  ll ans=-1e9;
 for(auto k:mp)
 {
    ans=max(ans,k.second);
 }
 cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t; while(t--)
    solve();
        return 0;
}
