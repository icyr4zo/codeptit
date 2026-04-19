#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >> k;
		vector<int> target(k);
		for (int i = 0;i<k;i++){
			cin >> target[i];
		}
		vector<int> a(n);
		for(int i = 0;i<k;i++) a[i] = 1;
		for (int i =k;i<n;i++) a[i] = 0;
		int cnt = 0;
		do {
			cnt++;
			vector<int> current;
			for(int i = 0; i<n;i++)
				if(a[i]) current.push_back(i+1);
			
			if(current==target){
				cout << cnt << endl;
				break;
			}
			
		} while(prev_permutation(a.begin(), a.end()));
	}
}
