#include <bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin >> q;
	stack<int> st;
	while (q--){
		string cmd; cin >> cmd;
		
		if(cmd == "PUSH"){
			int x; cin >> x;
			st.push(x);
		}
		else if (cmd == "POP") {
			if(!st.empty()) st.pop();
		}
		else if (cmd == "PRINT") {
			if(st.empty()) cout << "NONE" << endl;
			else cout << st.top() << endl;
		}
	}
	return 0;
}
