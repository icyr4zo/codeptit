#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		int n = s.size();
		int cnt[26] = {0}; 
		for (char c : s) {
			cnt[c - 'a']++;
		}
		int maxFreq = 0;
		for (int i = 0 ; i < 26;i++){
			maxFreq = max(maxFreq,cnt[i]);
		}
		if (maxFreq > (n+1)/2) cout << "-1" << endl;
		else cout << "1" << endl;
	}
}
