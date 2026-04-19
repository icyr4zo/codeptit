#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;

void solve() {
    int count = 0;
    for (int i : a) {
        if (i == 1) count++;
    }
    if (count == k) {
        for (int i : a) cout << i;
        cout << endl;
    }
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        a[i] = j;
        if (i == n - 1) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    a.resize(n);
    Try(0);
}

int main() {
    int t = 1; cin >> t;
    while (t--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
