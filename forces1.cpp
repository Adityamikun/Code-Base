#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;

    vector<int> permutation(n);

    // Construct the permutation
    for (int i = 0; i < n; i++) {
        permutation[i] = i + 1;
    }

    // Swap the largest prime number with the last element in the permutation
    int largestPrime = 2;
    for (int i = n; i >= 2; i--) {
        if (isPrime(i)) {
            largestPrime = i;
            break;
        }
    }
    swap(permutation[n - 1], permutation[largestPrime - 1]);

    // Print the permutation
    for (int i = 0; i < n; i++) {
        cout << permutation[i] << " ";
    }
    cout << endl;

    // Calculate the maximum possible primality
    int primality = 0;
    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {
            int mex = 1;
            vector<bool> visited(n + 1, false);
            for (int i = l; i <= r; i++) {
                visited[permutation[i]] = true;
            }
            while (visited[mex]) {
                mex++;
            }
            if (isPrime(mex)) {
                primality++;
            }
        }
    }

    // Print the maximum possible primality
    cout << primality << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
