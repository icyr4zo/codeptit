#include <bits/stdc++.h>
using namespace std;

bool leap(int y){
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

bool valid(int d, int m, int y){
    if (y < 2000) return false;
    if (m < 1 || m > 12) return false;
    
    int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (leap(y)) days[2] = 29;
    
    if (d < 1 || d > days[m]) return false;
    
    return true;
}

int main(){
    vector<string> res;
    for (int mask = 0; mask < (1 << 8); mask++){
        string s = "";
        
        for (int i = 7; i >= 0; i--){
            if (mask & (1 << i)) s += '2';
            else s += '0';
        }

        int d = stoi(s.substr(0,2));
        int m = stoi(s.substr(2,2));
        int y = stoi(s.substr(4,4));
        
        if (valid(d, m, y)){
            string date = s.substr(0,2) + "/" + s.substr(2,2) + "/" + s.substr(4,4);
            res.push_back(date);
        }
    }
    sort(res.begin(), res.end());
    
    for (auto x : res)
        cout << x << endl;
}
