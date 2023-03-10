#include <iostream>
#include <string>

using namespace std;

string removeAdjacentDuplicates(string s) {
    int n = s.length();
    int i = 0;

    while (i < n-1) {
        if (s[i] == s[i+1]) {
            s.erase(i, 2);  // remove the two adjacent same characters
            n = s.length(); // update the length of the string
            i = max(0, i-1); // move i back one index to handle the case where a new pair of duplicates are formed
        } else {
            i++; // move i forward
        }
    }

    return s;
}

int main() {
    string s;
    cin >> s;

    string result = removeAdjacentDuplicates(s);

    cout << result << endl;

    return 0;
}
