#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<string> a;   
vector<string> cur; 

void Try(int pos, int start) {
    if (pos == k) {
        for (string x : cur) cout << x << " ";
        cout << endl;
        return;
    }

    for (int i = start; i < a.size(); i++) {
        cur[pos] = a[i];
        Try(pos + 1, i + 1);
    }
}

int main() {
    cin >> n >> k;

    set<string> s;
    for (int i = 0; i < n; i++) {
        string x; cin >> x;
        s.insert(x);
    }

    for (string x : s) a.push_back(x);

    cur.resize(k);
    Try(0, 0);
}
