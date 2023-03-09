#include <bits/stdc++.h>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
    stack<int> stk;
    for (int asteroid : asteroids) {
        bool exploded = false;
        while (!stk.empty() && asteroid < 0 && stk.top() > 0) {
            int top = stk.top();
            stk.pop();
            if (abs(asteroid) > top) {
                // The asteroid explodes the top ball
                continue;
            } else if (abs(asteroid) < top) {
                // The asteroid is exploded by the top ball
                stk.push(top);
                exploded = true;
                break;
            } else {
                // Both balls explode
                exploded = true;
                break;
            }
        }
        if (!exploded) {
            stk.push(asteroid);
        }
    }
    vector<int> result(stk.size());
    int i = stk.size() - 1;
    while (!stk.empty()) {
        result[i--] = stk.top();
        stk.pop();
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> asteroids(n);
    for (int i = 0; i < n; i++) {
        cin >> asteroids[i];
    }
    vector<int> result = asteroidCollision(asteroids);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
//explain
//If the current ball is moving to the right and the top ball is moving to the left, or if the current ball and the top ball are moving in opposite directions, they will collide. We compare their sizes, and if the current ball is smaller, it explodes and we discard it. If the top ball is smaller, it explodes and we discard it, and we keep iterating over the stack until the current ball no longer collides with any of the remaining balls.

//If the current ball does not collide with any of the balls in the stack, we push it onto the stack.

//At the end, the stack contains the remaining balls after all collisions, and we can output them in the order they appear in the stack.


