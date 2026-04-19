#include <bits/stdc++.h>
using namespace std;

void testCase(){
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0;i<n;i++){
		cin >> a[i];
	}
	if(next_permutation(a.begin(), a.end())){
		for (int i = 0; i<n;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	} else {
		for (int i = 0; i<n;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while (t--){
		testCase();
	}
	return 0;
}
