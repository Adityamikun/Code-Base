#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;
typedef vector<int> vi;

void solve()
{
   int n,q;
   cin>>n>>q;
   deque<int>dq;
   int a[n];
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   	dq.push_back(a[i]);
   }
   vector<pair<int,int>>v;
   int count=0;
   for(int i=0;i<q;i++)
   {
    int x,y,c=0,d=0;
   	 if(!dq.empty())
    {
      x=dq.front();
      c++;
   	 dq.pop_front();
    }
    if(!dq.empty())
    {
   	  y=dq.front();
      d++;
   	 dq.pop_front();
    }
     if(c==1 && d==1)
     {
   	 v.push_back({x,y});
   	 int larger=max(x,y);
   	 int smaller=min(x,y);
   	 dq.push_front(larger);
   	 dq.push_back(smaller);
    }

   
   }
   while(q--)
   {
   	int k;
   	cin>>k;
	k--;
   	cout<<v[k].first<<" ";cout<<v[k].second<<endl;

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