#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
typedef vector<int> vi;

void solve()
{
    ll q;
    cin >> q;
    ll a;
    cin >> a;

    multiset<ll> m1;
    multiset<ll> m2;
    int sum = 0;
    while (q--)
    {
        ll k;
        cin >> k;

        if (k == 1)
        {
            ll x;
            cin >> x;
            if (m1.size() < a)
            {
                m1.insert(x);
                sum += x;
            }
            else
            {
                m1.insert(x);
                m2.insert(*m1.begin());
                sum += x - *m1.begin();
                m1.erase(m1.begin());
            }
        }
        if (k == 2)
        {
            ll x;
            cin >> x;
            if (m2.find(x) != m2.end())
            {
                m2.erase(m2.find(x));
            }
            if (m1.find(x) != m1.end())
            {
                m1.erase(m1.find(x));
                sum -= x;

                if (m1.empty() && !m2.empty())
                {
                    m1.insert(*m2.begin());
                    sum += *m2.begin();
                    m2.erase(m2.begin());
                }
            }
        }
        if (k == 3)
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

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
