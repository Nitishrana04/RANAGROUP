# Algorithm:

// 1.Create a stack and push the first digit of the string num onto the stack.
// 2.Traverse through the rest of the digits in num and for each digit, do the following:
//   a. While k is greater than 0 and the stack is not empty and the top element of the stack is greater than the current digit, pop the top element of the stack and decrement k.
//   b. Push the current digit onto the stack.
// 3.If k is still greater than 0, pop k elements from the stack.
// 4.Create a string from the remaining elements in the stack and return it.

//  Let's implement the above algorithm in C++: */ 


#include <iostream>
#include <stack>
#include <string>

using namespace std;

string removeKDigits(string num, int k) {
    stack<char> st;
    for (char digit : num) {
        while (k > 0 && !st.empty() && st.top() > digit) {
            st.pop();
            k--;
        }
        st.push(digit);
    }
    while (k > 0 && !st.empty()) {
        st.pop();
        k--;
    }
    string result;
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }
    return result.empty() ? "0" : result;
}

int main() {
    string num;
    int k;
    cin >> num >> k;
    cout << removeKDigits(num, k) << endl;
    return 0;
}
