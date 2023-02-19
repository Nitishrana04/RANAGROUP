#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> votes;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        votes[num]++;
    }
    for (auto v: votes) {
        if (v.second > n/3) {
            cout << v.first << endl;
        }
    }
    return 0;
}
