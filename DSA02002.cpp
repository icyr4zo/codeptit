#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> triangle;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    triangle.push_back(a);
    while (a.size() > 1) {
        vector<int> next_row;
        for (int i = 0; i < a.size() - 1; i++) {
            next_row.push_back(a[i] + a[i + 1]);
        }
        triangle.push_back(next_row);
        a = next_row;
    }

    for (int i = triangle.size() - 1; i >= 0; i--) {
        cout << "[";
        for (int j = 0; j < triangle[i].size(); j++) {
            cout << triangle[i][j];
            if (j < triangle[i].size() - 1) cout << " ";
        }
        cout << "] ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
