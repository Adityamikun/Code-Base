#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	 int n;
	 cin>>n;
	 vector<int> a(n);
	 vector<int>b(n);
	 for(int i=0;i<n;i++)
	 {
	  cin>>a[i];
	 }
	 for(int i=0;i<n;i++)
	 {
	  cin>>b[i];
	 }
	 sort(a.begin(),a.end());
	 sort(b.begin(),b.end());
	 ll sum=0;
	 for(int i=0;i<n;i++)
	 {
	  sum=sum+abs(a[i]-b[i]);
	 }
	 cout<<sum<<endl;
	 
	 
	 
	}
	return 0;
}
