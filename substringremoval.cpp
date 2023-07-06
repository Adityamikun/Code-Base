#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int sum = 0;

void removeSubsequence(string& originalStr, const string& subsequence, int x, int y) {
    size_t pos = originalStr.find(subsequence);
    if (subsequence == "ab") {
        while (pos != string::npos) {
            originalStr.erase(pos, subsequence.length());
            pos = originalStr.find(subsequence);
            sum += x;
        }
    }
    else if (subsequence == "ba") {
        while (pos != string::npos) {
            originalStr.erase(pos, subsequence.length());
            pos = originalStr.find(subsequence);
            sum += y;
        }
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        int x, y;
        cin >> x >> y;
        
        sum = 0; // Reset sum for each test case
        
        if (x > y) {
            removeSubsequence(s, "ab", x, y);
            removeSubsequence(s, "ba", x, y);
        }
        else {
            removeSubsequence(s, "ba", x, y);
           
            removeSubsequence(s, "ab", x, y);
        }
        
        cout << sum << endl;
    }

    return 0;
}
