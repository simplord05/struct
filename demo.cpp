#include <iostream>
#include <algorithm>
#define filein() freopen("test.inp", "r", stdin);
#define fileout() freopen("test.out", "w", stdout);
using namespace std;

struct sinhVien{
    int stt;
    double T, L, A;
};

sinhVien a[100];
int n;

bool cmpT(sinhVien a, sinhVien b)   {return a.T > b.T;}

bool cmpL(sinhVien a, sinhVien b)    {return a.L > b.L;}

bool cmpA(sinhVien a, sinhVien b)    {return a.A > b.A;}

void sortT(){
    sort(a + 1, a + n + 1, cmpT);
    cout << "       Theo diem mon Toan" << endl;
    for(int i = 1; i <= n; i++){
        cout << "Sinh vien thu " << a[i].stt << ":";
        cout << "      " << a[i].T << " " << a[i].L << " " << a[i].A << endl;
    }
}

void sortL(){
    sort(a + 1, a + n + 1, cmpL);
    cout << "       Theo diem mon Ly" << endl;
    for(int i = 1; i <= n; i++){
        cout << "Sinh vien thu " << a[i].stt << ":";
        cout << "      " << a[i].T << " " << a[i].L << " " << a[i].A << endl;
    }
}

void sortA(){
    sort(a + 1, a + n + 1, cmpA);
    cout << "       Theo diem mon Anh" << endl;
    for(int i = 1; i <= n; i++){
        cout << "Sinh vien thu " << a[i].stt << ":";
        cout << "      " << a[i].T << " " << a[i].L << " " << a[i].A << endl;
    }
}

int main(){
    filein(); fileout();
    cin >> n;
    for(int i = 1; i <= n; i++){
        a[i].stt = i;
        cin >> a[i].T >> a[i].L >> a[i].A;
    }
    sortT();
    sortL();
    sortA();
    return 0;
}
