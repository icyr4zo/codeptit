#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i<n;i++){
		a[i] = n - i;
	}
	do {
		for (int i = 0;i < n; i++){
			cout << a[i];
		}
		cout << " ";
	} while (prev_permutation(a.begin(), a.end()));
}

int main(){
	int t; cin >> t;
	while (t--){
		testCase();
		cout << endl;
	}
	return 0;
}
