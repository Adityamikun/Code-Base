#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;
typedef vector<int> vi;


// Custom comparator function
bool comparePairs(const pair<int, int>& pair1, const pair<int, int>& pair2) {
    int diff1 = abs(pair1.first - pair1.second);
    int diff2 = abs(pair2.first - pair2.second);
    return diff1 > diff2; // Reverse sort based on the difference between pair elements
}



void solve()
{
	ll n;cin>>n;
	vector<pair<ll,ll>>v(n);
	for(int i=0;i<n;i++)
	{
		ll x,y;cin>>x>>y;
		v[i]={x,y};
	}
	sort(v.begin(),v.end(),comparePairs);
	
	ll ans=v[0].first;
	for(int i=1;i<n;i++)
	{
		ll k=v[i-1].first-v[i-1].second;
		ans+=v[i].first-k;
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