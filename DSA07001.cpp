#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> st;
    string cmd;
    
    while (cin >> cmd) {
        if (cmd == "push") {
            int x; cin >> x;
            st.push_back(x);
        }
        else if (cmd == "pop") {
            if (!st.empty()) st.pop_back();
        }
        else if (cmd == "show") {
            if (st.empty()) {
                cout << "empty\n";
            } else {
                for (int i = 0; i < st.size(); i++) {
                    cout << st[i];
                    if (i < st.size() - 1) cout << " ";
                }
                cout << "\n";
            }
        }
    }
    return 0;
}
