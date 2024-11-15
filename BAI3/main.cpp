#include "BAI3.h"

using namespace std;

int main() {
    srand(time(0));  // Khoi tao so ngau nhien

    // Khoi tao nong trai voi so luong gia suc ban dau

    // So luong bo, cuu, de
    int cntBo, cntCuu, cntDe;

    cout << "Nhap so luong bo: ";   cin >> cntBo;
    cout << "Nhap so luong cuu: ";  cin >> cntCuu;  
    cout << "Nhap so luong de: ";   cin >> cntDe;

    NongTrai nongTrai(cntBo, cntCuu, cntDe);

    // Liet ke tieng keu cua toan bo gia suc trong nong trai
    cout << "Tieng keu cua toan bo gia suc:\n";
    nongTrai.keuToanTrai();

    // Thong ke so luong gia suc va tong so sua
    cout << "\nThong ke gia suc va sua:\n";
    nongTrai.thongKe();

    return 0;
}
