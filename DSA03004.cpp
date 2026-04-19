#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while (t--){
		int n;cin >> n;
		vector<int> a(n);
		for (int i = 0; i<n;i++) cin >> a[i];
		sort(a.begin(), a.end());
		long long chan=0,le=0;
		for(int i=0;i<n;i++){
			if(i%2==0) chan=chan*10+a[i];
			else le=le*10+a[i];
		}
		cout<<chan+le<<endl;
	}
}
// 2 3 4 5 6 8
