#include <bits/stdc++.h>
using namespace std;

int n;
string s;
vector<string> res;

void solve(){
	if (s[0] == 'H' && s[n-1] == 'A' && s.find("HH") == -1 ){
		res.push_back(s);
	}
}

void Try(int i){
	for (int j = 0; j <= 1; j++){
		if (j == 0) s[i] = 'H';	
		else s[i] = 'A';
		if (i == n - 1 ) solve();
		else Try(i+1);
	}
}

void testCase(){
	cin >> n;
	s.resize(n);
	res.clear();
	Try(0);
	sort(res.begin(), res.end());
	for (string i : res) cout << i << endl;
}

int main(){
	int t; cin >> t;
	while (t--){
		testCase();
		cout << endl;
	}
	return 0;
}
