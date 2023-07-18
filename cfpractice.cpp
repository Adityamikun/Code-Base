#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
typedef vector<int> vi;

void solve()
{
	int n;
	cin >> n;
	vi a(n);
	int count = 0, k;
	int ans;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] < 0)
		{
			count++;
			k = a[i];
			
		}
	}
	sort(a.begin(), a.end());
	if (count > 0)
	{
		cout << k << endl;
	}
	else
	{
		ans = a[n - 1];
		cout << ans << endl;
	}
}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}
