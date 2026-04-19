#include<bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	string s(n , 'A');
	while (true){
		cout << s << " ";
		int i = n - 1;
		while (i>=0 && s[i] == 'B'){
			s[i] = 'A';
			i--;
		}
		if (i < 0) break;
		s[i] = 'B';
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while (t--){
		testCase();
	}
	return 0;
}
