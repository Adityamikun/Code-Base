#include<bits/stdc++.h>
using namespace std;
#define endl  "\n";
typedef long long ll;
typedef vector<int> vi;

ll binary_exponentiation(ll a, ll b, ll mod)
{
    ll ans = 1;
    while (b)
    {
        if (b % 2 == 1)
        {
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b = b / 2;
    }
    return ans;
}

void solve()
{
    ll a, b, c, p;
    cin >> a >> b >> c >> p;
    ll k=0;
    if (b == 0 && c == 0)
    {
         k=1;
        
    }
     if(a==0 && k==1)
     {
            cout<<1<<endl;
            return;
        }
        if(a==0 && k!=1)
     {
            cout<<0<<endl;
            return;
        }
         if(a!=0 && k==1)
        {
            cout<<binary_exponentiation(a, 1, p) % p<<endl;
            return;
        }
    ll x = binary_exponentiation(b, c, p - 1) % (p - 1);
    ll y = binary_exponentiation(a, x, p) % p;
    cout << y << endl;
    return;
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
