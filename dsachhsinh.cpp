#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

struct SinhVien {
    string ma, ten, lop, ns;
    float gpa;
};

string chuanhoa(string s) {
    stringstream ss(s);
    string word, res = "";
    while (ss >> word) {
        for (auto &x : word) x = tolower(x);
        word[0] = toupper(word[0]);
        res += word + " ";
    }
    if (!res.empty()) res.pop_back();
    return res;
}

void ngaysinh(string &s) {
    int d, m, y;
    sscanf(s.c_str(), "%d/%d/%d", &d, &m, &y);
    stringstream ss;
    ss << setw(2) << setfill('0') << d << "/"
       << setw(2) << setfill('0') << m << "/"
       << y;
    s = ss.str();
}

void nhap(SinhVien ds[], int n) {
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, ds[i].ten);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].ns);
        cin >> ds[i].gpa;
        cin.ignore();

        ds[i].ten = chuanhoa(ds[i].ten);
        ngaysinh(ds[i].ns);

        string id = to_string(i + 1);
        while (id.size() < 3) id = "0" + id;
        ds[i].ma = "B20DCCN" + id;
    }
}
void sapxep(SinhVien ds[], int n) {
    sort(ds, ds + n, [](SinhVien a, SinhVien b) {
        return a.gpa > b.gpa;
    });
}

void in(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout << ds[i].ma << " " << ds[i].ten << " " << ds[i].lop << " "
             << ds[i].ns << " " << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main() {
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}

