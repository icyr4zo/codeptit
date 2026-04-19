#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	queue<int> q;
	
	while (t--){
		string cmd; cin >> cmd;
		
		if(cmd == "PUSH"){
			int x; cin >> x;
			q.push(x);
		}
		else if(cmd == "PRINTFRONT"){
			if(!q.empty()) cout << q.front() << endl;
			else cout << "NONE\n";
		}
		else if(cmd == "POP"){
			if(!q.empty()) q.pop();
		}
	}
	return 0;
}
