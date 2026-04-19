#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	
	do {
		cout << s << " ";
	} while(next_permutation(s.begin() , s.end()));
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		solve();
	}
	return 0;
}
