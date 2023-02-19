#include <bits/stdc++.h>
using namespace std;

int main() {
    string num;
    int k;
    cin >> num >> k;

    stack<char> s;


    for (char c : num) {
        while (k > 0 && !s.empty() && s.top() > c) {
            s.pop();
            k--;
        }
        s.push(c);
    }


    while (k > 0 && !s.empty()) {
        s.pop();
        k--;
    }


    string Ans = "";
    while (!s.empty()) {
        Ans = s.top() + Ans;
        s.pop();
    }


    while (Ans.size() > 1 && Ans[0] == '0') {
        Ans.erase(0, 1);
    }

    cout << Ans << endl;
    return 0;
}
