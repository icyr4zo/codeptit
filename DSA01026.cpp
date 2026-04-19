#include<bits/stdc++.h>
using namespace std;

int n;
char a[105];

void Try(int pos){
	if (pos > n){
		for (int i = 1; i <= n;i++){
		cout << a[i];
	}
	cout << endl;
	return;
	}
	
	if(pos == 1){
		a[pos] == '8';
		Try(pos +1);
		return;
	}
	if (pos == n){
		if(pos >= 4) {
			if(a[pos-3] == '6' && a[pos-2] == '6' && a[pos-1] == '6'){
				return;
			}
		}
		a[pos] = '6';
		Try(pos+1);
		return;
	}
	bool check=true;
	if(pos>=4) {
		if(a[pos-3] =='6' && a[pos-2] == '6' && a[pos-1] == '6'){
			check = false;
		}
	}
	if(check){
		a[pos] ='6';
		Try(pos+1);
	}
	if(a[pos-1] != '8'){
		a[pos] = '8';
		Try(pos+1);
	}
}

int main(){
	cin >> n;
	Try(1);
	return 0;
}
