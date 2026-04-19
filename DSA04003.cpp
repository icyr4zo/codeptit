#include<bits/stdc++.h>
using namespace std;

long long MOD = 123456789;

long long power(long long n, long long r){
	if (r == 0) return 1;
	long long temp = power(n,r/2);
	
	temp = (temp * temp) % MOD;
	if(r%2==1) return (temp * n) % MOD;
	
	return temp;
}

int main(){
	int t; cin >> t;
	while (t--){
		long long n; cin >> n;
		cout << power(2, n - 1) << endl;
	}
	return 0;
}
