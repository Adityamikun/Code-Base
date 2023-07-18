#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef  long long ll;
typedef vector<int> vi;

void solve()
{
  int n;
  cin>>n;
  ll a[n];
  ll sum=0,ans=0,ans1=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    sum+=a[i];
  }
    double average=sum/(double)n;
  ll x=(floor)(average);
  ll y=((ceil)(average));
 
  for(int i=0;i<n;i++)
  {
    ans=ans+((a[i]-x)*(a[i]-x));
  }
  for(int i=0;i<n;i++)
  {
    ans1=ans1+((a[i]-y)*(a[i]-y));
  }
  ans=min(ans,ans1);


   cout  << ans << endl; 
  

}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t; while(t--)
    solve();
        return 0;
}