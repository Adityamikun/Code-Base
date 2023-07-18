#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumRopesToCut(int n, vector<pair<int, int>>& nails) {
    sort(nails.begin(), nails.end());
    
    int ropesToCut = 0;
    int maxRopeLength = 0;
    
    for (int i = 0; i < n; i++) {
        if (nails[i].second > maxRopeLength) {
            ropesToCut++;
            maxRopeLength = nails[i].second;
        }
    }
    
    return ropesToCut;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> nails(n);
        for (int i = 0; i < n; i++) {
            cin >> nails[i].first >> nails[i].second;
        }

        int ropesToCut = minimumRopesToCut(n, nails);
        cout << ropesToCut << endl;
    }

    return 0;
}
