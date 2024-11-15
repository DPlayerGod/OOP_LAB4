#include "BAI3.h"
#include <ctime>  // De su dung ham thoi gian cho so ngau nhien

using namespace std;

// Ham khoi tao cho NongTrai
NongTrai::NongTrai(int soLuongBo, int soLuongCuu, int soLuongDe) {
    // Tao gia suc bo
    for (int i = 0; i < soLuongBo; ++i) {
        bo.push_back(Bo(1));  // Tạo mỗi con bò, số lượng là 1
    }

    // Tao gia suc cuu
    for (int i = 0; i < soLuongCuu; ++i) {
        cuu.push_back(Cuu(1));  // Tạo mỗi con cừu, số lượng là 1
    }

    // Tao gia suc de
    for (int i = 0; i < soLuongDe; ++i) {
        de.push_back(De(1));  // Tạo mỗi con dê, số lượng là 1
    }
}

// Phuong thuc keu cua toan bo gia suc
void NongTrai::keuToanTrai() {
    // Keu cua bo
    for (auto& b : bo) {
        b.keu();
    }

    // Keu cua cuu
    for (auto& c : cuu) {
        c.keu();
    }

    // Keu cua de
    for (auto& d : de) {
        d.keu();
    }
}

// Phuong thuc thong ke so luong gia suc va tong so sua
void NongTrai::thongKe() {
    int tongSua = 0;

    // Tinh tong sua cua bo
    for (auto& b : bo) {
        tongSua += b.choSua();
    }

    // Tinh tong sua cua cuu
    for (auto& c : cuu) {
        tongSua += c.choSua();
    }

    // Tinh tong sua cua de
    for (auto& d : de) {
        tongSua += d.choSua();
    }

    int tongBoCon = 0, tongCuuCon = 0, tongDeCon = 0;
    // Sinh con cho bo
    for (auto& b : bo) {
        tongBoCon += b.sinhCon();
    }
    // Sinh con cho cuu
    for (auto& c : cuu) {
        tongCuuCon += c.sinhCon();
    }
    //  Sinh con cho de
    for (auto& d : de) {
        tongDeCon += d.sinhCon();
    }

    // In thong ke
    cout << "Tong so gia suc trong nong trai:\n";
    cout << "Bo: " << bo.size() + tongBoCon  << " con\n";
    cout << "Cuu: " << cuu.size() + tongCuuCon << " con\n";
    cout << "De: " << de.size() + tongDeCon << " con\n";
    cout << "Tong so sua: " << tongSua << " lit\n";
}

// Ham cho sua cho Bo
int Bo::choSua() {
    return rand() % 21;  // Bò cho sữa từ 0 đến 20 lít
}

// Ham sinh con cho Bo
int Bo::sinhCon() {
    return rand() % 3;  // Bò sinh từ 0 đến 2 con
}

// Ham keu cua Bo
void Bo::keu() {
    cout << "Moo!\n";
}

// Ham cho sua cho Cuu
int Cuu::choSua() {
    return rand() % 6;  // Cừu cho sữa từ 0 đến 5 lít
}

// Ham sinh con cho Cuu
int Cuu::sinhCon() {
    return rand() % 3;  // Cừu sinh từ 0 đến 2 con
}

// Ham keu cua Cuu
void Cuu::keu() {
    cout << "Baaa!\n";
}

// Ham cho sua cho De
int De::choSua() {
    return rand() % 11;  // Dê cho sữa từ 0 đến 10 lít
}

// Ham sinh con cho De
int De::sinhCon() {
    return rand() % 3;  // Dê sinh từ 0 đến 2 con
}

// Ham keu cua De
void De::keu() {
    cout << "Meeh!\n";
}
