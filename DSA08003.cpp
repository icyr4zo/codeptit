#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	deque<int> dq;
	while(t--){
		string cmd;
		cin >> cmd;
		if(cmd == "PUSHFRONT"){
			int x;
			cin >> x;
			dq.push_front(x);
		}
		else if(cmd == "PUSHBACK"){
			int x; cin >> x;
			dq.push_back(x);
		}
		else if(cmd == "POPFRONT"){
			if(!dq.empty()) dq.pop_front();
		}
		else if(cmd == "POPBACK"){
			if(!dq.empty()) dq.pop_back();
		}
		else if(cmd == "PRINTFRONT"){
			if(dq.empty()) cout << "NONE\n";
			else cout << dq.front() << endl;
		}
		else if(cmd == "PRINTBACK"){
			if(dq.empty()) cout << "NONE\n";
			else cout << dq.back() << endl;
		}
	}
	return 0;
}
