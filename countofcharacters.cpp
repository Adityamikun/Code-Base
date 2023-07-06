#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
typedef vector<int> vi;

string convertToLowercase(string str)
{
    string convertedStr;
    for (char c : str)
    {
        if (isalpha(c))
        {
            convertedStr += tolower(c);
        }
    }
    return convertedStr;
}

void solve()
{
    
   string s;
    getline(cin, s);
    getline(cin,s);
    
    map<char, int> mp;
    s = convertToLowercase(s);
    
    mp.clear();

    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }

    string q = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 26; i++)
    {
        cout << mp[q[i]] << " ";
    }
    cout << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    
    while (t--)
    {  

        solve();
    }
    return 0;
}
