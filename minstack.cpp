#include <bits/stdc++.h>
using namespace std;

class MinStack {
private:
    stack<int> elements;

public:
    MinStack() {}

    void push(int x) {
        elements.push(x);
    }

    void pop() {
        if (!elements.empty()) {
            elements.pop();
        }
    }

    int top() {
        if (!elements.empty()) {
            return elements.top();
        }
        return -1;  // or throw an exception if desired
    }

    int getMin() {
        if (!elements.empty()) {
            stack<int> tempStack = elements;
            int minVal = tempStack.top();
            tempStack.pop();
            while (!tempStack.empty()) {
                minVal = min(minVal, tempStack.top());
                tempStack.pop();
            }
            return minVal;
        }
        return -1;  // or throw an exception if desired
    }

    bool empty() {
        return elements.empty();
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;

    MinStack s;

    while (q--) {
        string op;
        cin >> op;

        if (op == "push") {
            int x;
            cin >> x;
            s.push(x);
        }
        if (op == "pop") {
            if (!s.empty()) {
                s.pop();
            }
        }
        if (op == "top") {
            if (!s.empty()) {
                cout << s.top() << "\n";
            }
            else {
                cout << -1 << endl;
            }
        }
        if (op == "getMin") {
            if (!s.empty()) {
                cout << s.getMin() << "\n";
            }
            else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
