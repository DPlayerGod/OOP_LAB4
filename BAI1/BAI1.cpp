#include "BAI1.h"

NhanVien::NhanVien() {
    maNhanVien = "";
    hoTen = "";
    luong = 0;
}

NhanVien::NhanVien(string maNhanVien, string hoTen, double luong) {
    this->maNhanVien = maNhanVien;
    this->hoTen = hoTen;
    this->luong = luong;
}

void NhanVien::Nhap() {
    cout << "Nhap ma nhan vien: ";
    cin >> maNhanVien;
    cin.ignore();
    cout << "Nhap ho ten: ";
    getline(cin, hoTen);
    cout << "Nhap luong: ";
    cin >> luong;
}

void NhanVien::Xuat() {
    cout << "Ma nhan vien: " << maNhanVien << '\n';
    cout << "Ho ten: " << hoTen << '\n';
    cout << "Luong: " << fixed << setprecision(4) << luong << '\n';
}

string NhanVien::getMaNhanVien() const {
    return maNhanVien;
}

string NhanVien::getHoTen() const {
    return hoTen;
}

double NhanVien::getLuong() const {
    return luong;
}

QuanLy::QuanLy() : NhanVien() {
    tyleThuong = 0;
}

QuanLy::QuanLy(string maNhanVien, string hoTen, double luong, double tyleThuong) 
    : NhanVien(maNhanVien, hoTen, luong) {
    this->tyleThuong = tyleThuong;
}

double QuanLy::tienThuong() {
    return getLuong() * tyleThuong;
}

void QuanLy::Nhap() {
    NhanVien::Nhap();
    cout << "Nhap ty le thuong: ";
    cin >> tyleThuong;
}

void QuanLy::Xuat() {
    NhanVien::Xuat();
    cout << "Ty le thuong: " << tyleThuong << '\n';
    cout << "Tien thuong: " << fixed << setprecision(4) << tienThuong() << '\n';
}

KySu::KySu() : NhanVien() {
    soGioLamThem = 0;
}

KySu::KySu(string maNhanVien, string hoTen, double luong, double soGioLamThem) 
    : NhanVien(maNhanVien, hoTen, luong) {
    this->soGioLamThem = soGioLamThem;
}

double KySu::tienGioLamThem() {
    return soGioLamThem * 100000;
}

void KySu::Nhap() {
    NhanVien::Nhap();
    cout << "Nhap so gio lam them: ";
    cin >> soGioLamThem;
}

void KySu::Xuat() {
    NhanVien::Xuat();
    cout << "So gio lam them: " << soGioLamThem << '\n';
    cout << "Tien thuong lam them: " << fixed << setprecision(4) << tienGioLamThem() << '\n';
}