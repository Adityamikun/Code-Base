#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

void solve()
{
    ll q;
    cin >> q;
    multiset<ll> m;int sum=0;
    while (q--)
    {
        ll k;
        cin >> k;
        
        if (k == 1)
        {
            ll x;
            cin >> x;
            m.insert(x);
            sum=sum+x;

        }
        if (k == 2)
        {
            ll x;
            cin >> x;
            if (m.find(x) != m.end())
            {
                m.erase(m.find(x));
                sum=sum-x;
            }
        }
        if (k == 3)
        {
            char y;
            cin >> y;
            if (y == '?')
            {
                if (!m.empty())
                {
                    cout << *(m.begin()) << endl;
                }
                else
                {
                    cout << -1 << endl;
                }
            }
        }
        if (k == 4)
        {
            char y;
            cin >> y;
            if (y == '?')
            {
                if (!m.empty())
                {
                    cout << *(m.rbegin()) << endl;
                }
                else
                {
                    cout << -1 << endl;
                }
            }
        }
        if (k == 5)
        {
            char y;
            cin >> y;
            if (y == '?')
            {
                
                cout << sum << endl;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
        solve();
    return 0;
}
