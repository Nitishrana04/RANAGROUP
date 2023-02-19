#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int i = 0, j = n - 1;
    while (i < n - 1 && a[i] <= a[i+1]) {
        i++;
    }
    while (j > 0 && a[j] >= a[j-1]) {
        j--;
    }

    if (i >= j) {
        cout << "0\n";
        return 0;
    }

    int min_val = *min_element(a+i, a+j+1);
    int max_val = *max_element(a+i, a+j+1);
    int l = i, r = j;
    while (l > 0 && a[l-1] > min_val) {
        l--;
    }
    while (r < n-1 && a[r+1] < max_val) {
        r++;
    }

    cout << r - l + 1 << "\n";

    return 0;
}
