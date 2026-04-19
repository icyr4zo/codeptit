#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n < 2) return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}

int main(){
    int n,k;
    cin >> n >> k;

    vector<int> a(n);

    for(int i=0;i<k;i++) a[i]=1;
    for(int i=k;i<n;i++) a[i]=0;

    int cnt = 0;

    do{
        cnt++;

        if(prime(cnt)){
            cout << cnt << ": ";

            for(int i=0;i<n;i++)
                if(a[i]) cout << i+1 << " ";

            cout << endl;
        }

    }while(prev_permutation(a.begin(),a.end()));
}
