//Check if the character is already in the stack. If it is, we skip it.

//If the character is not in the stack, we check if the top of the stack is greater than the current character, and if it is, we check if the top of the stack has more occurrences in the rest of the string. If it does, we pop it from the stack and add the current character to the stack.

//If the top of the stack is not greater than the current character or if it does not have more occurrences in the rest of the string, we simply add the current character to the stack.

//At the end, we convert the stack to a string and return it.

#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

string removeDuplicateLetters(string s) {
    int n = s.size();
    vector<int> last(26, -1);
    for (int i = 0; i < n; i++) {
        last[s[i] - 'a'] = i;
    }
    stack<char> st;
    vector<bool> vis(26, false);
    for (int i = 0; i < n; i++) {
        char c = s[i];
        if (vis[c - 'a']) {
            continue;
        }
        while (!st.empty() && st.top() > c && last[st.top() - 'a'] > i) {
            vis[st.top() - 'a'] = false;
            st.pop();
        }
        st.push(c);
        vis[c - 'a'] = true;
    }
    string ans = "";
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    string s;
    cin >> s;
    cout << removeDuplicateLetters(s) << endl;
    return 0;
}
