#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

void removeSubsequence(string& originalStr, const string& subsequence) {
    string modifiedStr = originalStr; // Create a copy of the original string
    size_t pos = modifiedStr.find(subsequence);
    
    while (pos != string::npos) {
        modifiedStr.erase(pos, subsequence.length());
        pos = modifiedStr.find(subsequence); // Search for the subsequence from the beginning of modifiedStr
    }
    
    originalStr = modifiedStr; // Update the original string with the modified string
}

int main() {
    string originalStr = "bbbbbbaab";
    string subsequence = "ba";
    int x = 0;
    int y = 0;

    removeSubsequence(originalStr, subsequence);

    cout << "Modified string: " << originalStr << endl;

    return 0;
}

