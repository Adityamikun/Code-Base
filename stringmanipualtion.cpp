#include<bits/stdc++.h>
using namespace std;
#define endl  "\n"
typedef long long ll;
typedef vector<int> vi;

void solve()
{
   string s;
   getline(cin,s);
  
   int q;
   cin>>q;
   cin.ignore(); // Ignore newline character after reading 'q'
   while(q--)
   {
      string x;
      cin>>x;
      if(x=="print")
      {
         int a,b;
         cin>>a>>b;
         for(int i=a;i<=b;i++)
         {
            cout<<s[i];
         }
         cout<<endl;
      }
      if(x=="reverse")
      {
         int a,b;
         cin>>a>>b;
         string sub=s.substr(a,b-a+1);
         reverse(sub.begin(),sub.end());
         s.replace(a,b-a+1,sub);
         cout<<s<<endl;
      }
      if(x=="replace")
      {
         int a,b;
         cin>>a>>b;
         string p;
         cin>>p;
         s.replace(a,b-a+1,p);
         cout<<s<<endl;
      }
      if(x=="rotate")
      {
         int k;
         cin>>k;
         int n=s.length();
         for(int i=0;i<n;i++)
         {
            if(i<n-k)
            {
               s[i]=s[i+k];
            }
            else
            {
               s[i]=s[i+k-n];
            }
         }
         cout<<s<<endl;
      }
   }
}

signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   int t;
   cin>>t;
   cin.ignore(); // Ignore newline character after reading 't'
   while(t--)
      solve();
   return 0;
}
