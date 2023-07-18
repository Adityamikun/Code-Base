#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

string fractionToDecimal(int numerator, int denominator) {
    if (numerator == 0) return "0";

    string result;
    if (numerator < 0 ^ denominator < 0) result += '-';

    long long num = abs(static_cast<long long>(numerator));
    long long den = abs(static_cast<long long>(denominator));

    result += to_string(num / den);
    long long remainder = num % den;
    if (remainder == 0) return result;

    result += '.';
    unordered_map<long long, int> remainderMap;

    while (remainder != 0) {
        if (remainderMap.find(remainder) != remainderMap.end()) {
            result.insert(remainderMap[remainder], "(");
            result += ")";
            break;
        }

        remainderMap[remainder] = result.size();
        remainder *= 10;
        result += to_string(remainder / den);
        remainder %= den;
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int numerator, denominator;
        cin >> numerator >> denominator;

        string result = fractionToDecimal(numerator, denominator);
        cout << result << endl;
    }

    return 0;
}
