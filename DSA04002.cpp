#include <bits/stdc++.h>
using namespace std;

long long MOD = 1e9 + 7;

long long reverseNum(long long n){
	long long r = 0;
	while (n > 0){
		r = r * 10 + n % 10;
		n /= 10;
	}
	return r;
}

long long power(long long n, long long r){
	if (r==0) return 1;
	long long temp = power(n,r/2);
	
	temp = (temp * temp) % MOD;
	
	if (r % 2 ==1) return (temp * n) % MOD;
	
	return temp;
}


int main(){
	int t;
	cin >> t;
	while (t--){
		long long n; cin >> n;
		long long r = reverseNum(n);
		cout << power(n,r) << endl;
	}
	return 0;
}
