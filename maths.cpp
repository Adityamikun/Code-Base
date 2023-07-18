#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
typedef vector<int> vi;
const ll mod = 1e9 + 7;

ll factorial[200010];

ll binary_exponentiation(ll a, ll b, ll mod) {
    ll ans = 1;
    while (b) {
        if (b % 2 == 1) {
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b = b / 2;
    }
    return ans;
}

void precomputeFactorials() {
    factorial[0] = 1;
    for (ll i = 1; i < 200010; i++) {
        factorial[i] = ((i%mod) * (factorial[i - 1]%mod)) % mod;
    }
}

void solve() {
    ll n, m;
    cin >> n >> m;

    ll p = factorial[n + m] % mod;
    ll q = ((factorial[n] % mod) * (factorial[m] % mod)) % mod;
    ll r = binary_exponentiation(q, mod - 2, mod);
    ll ans = (p * r) % mod;
    cout << ((ans%mod)+mod)%mod << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    precomputeFactorials();

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
