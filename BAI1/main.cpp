#include "BAI1.h"

int main() {
    QuanLy a;
    KySu b;

    cout << "Nhap thong tin cho Quan Ly: \n";
    a.Nhap();
    cout << '\n';
    cout << "Nhap thong tin cho Ky Su: \n";
    b.Nhap();

    cout << '\n';
    cout << "Thong tin Quan Ly: \n";
    a.Xuat();
    cout << '\n';
    cout << "Thong tin Ky Su: \n";
    b.Xuat();

    return 0;
}
