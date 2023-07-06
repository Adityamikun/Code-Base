#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;
typedef vector<int> vi;

void solve()
{
  stack<int>s;
  multiset<int>m;
  int q;cin>>q;
  while(q--)
  {
  	string st;cin>>st;
  	if(st=="push")
  	{
  		int x;
  		cin>>x;
  		s.push(x);
  		m.insert(x);
  	}
  	if(st=="pop")
  	{
  		if(!s.empty())
  		{
  			m.erase(m.find(s.top()));
  			s.pop();

  		}
  	}
  	if(st=="top")
  	{
  		if(!s.empty())
  		{
  			cout<<s.top()<<endl;
        }
        else
        {
        	cout<<-1<<endl;
        }
  	}
  	if(st=="getMin")
  	{
  		if(!s.empty())
  		{
  			cout<<*m.begin()<<endl;
  		}
  		else
  		{
  			cout<<-1<<endl;
  		}
  	}
  }
}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	solve();
        return 0;
}