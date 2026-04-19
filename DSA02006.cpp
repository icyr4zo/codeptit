#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, K;
int A[15];
vector<vector<int>> res;
vector<int> current;

void backtrack(int index, int current_sum) {
    if (current_sum == K) {
        res.push_back(current);
        return;
    }

    for (int i = index; i < N; i++) {
        if (current_sum + A[i] <= K) {
            current.push_back(A[i]);
            backtrack(i + 1, current_sum + A[i]);
            current.pop_back();
        }
    }
}

void solve() {
    cin >> N >> K;
    for (int i = 0; i < N; i++) cin >> A[i];

    sort(A, A + N);

    res.clear();
    current.clear();

    backtrack(0, 0);
    if (res.empty()) {
        cout << -1 << endl;
    } else {

        for (int i = 0; i < res.size(); i++) {
            cout << "[";
            for (int j = 0; j < res[i].size(); j++) {
                cout << res[i][j] << (j == res[i].size() - 1 ? "" : " ");
            }
            cout << "] ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
