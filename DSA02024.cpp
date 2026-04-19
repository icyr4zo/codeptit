#include <bits/stdc++.h>
using namespace std;

int n;
int a[25];
vector<string> res;
vector<int> tmp;

void backtrack(int pos) {
    for (int i = pos; i < n; i++) {

        if (tmp.empty() || a[i] > tmp.back()) {
            tmp.push_back(a[i]);

            if (tmp.size() >= 2) {
                string s = "";
                for (int x : tmp) {
                    s += to_string(x) + " ";
                }
                s.pop_back();
                res.push_back(s);
            }

            backtrack(i + 1);
            tmp.pop_back();
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    backtrack(0);

    sort(res.begin(), res.end());

    for (string s : res) {
        cout << s << endl;
    }
}
