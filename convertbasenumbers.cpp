#include <iostream>
#include <string>

using namespace std;

string convertBase(string N, int A, int B) {
    int decimal = 0;
    int power = 1;
    for (int i = N.length() - 1; i >= 0; i--) {
        int digit;
        if (N[i] >= '0' && N[i] <= '9') {
            digit = N[i] - '0';
        } else {
            digit = N[i] - 'A' + 10;
        }
        decimal += digit * power;
        power *= A;
    }

    string result = "";
    while (decimal > 0) {
        int remainder = decimal % B;
        char digit;
        if (remainder >= 0 && remainder <= 9) {
            digit = remainder + '0';
        } else {
            digit = remainder - 10 + 'A';
        }
        result = digit + result;
        decimal /= B;
    }

    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string N;
        int A, B;
        cin >> N >> A >> B;
        string convertedNumber = convertBase(N, A, B);
        cout << convertedNumber << endl;
    }
    return 0;
}
