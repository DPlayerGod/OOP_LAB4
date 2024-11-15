#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class NhanVien {
protected:    
    string maNhanVien;
    string hoTen;
    double luong;

public:
    NhanVien();
    NhanVien(string maNhanVien, string hoTen, double luong);

    void Nhap();
    void Xuat();

    string getMaNhanVien() const;
    string getHoTen() const;
    double getLuong() const;
};

class QuanLy : public NhanVien {
private:
    double tyleThuong;
public:
    QuanLy();
    QuanLy(string maNhanVien, string hoTen, double luong, double tyleThuong);

    double tienThuong();

    void Nhap();
    void Xuat();
};

class KySu : public NhanVien {
private:
    double soGioLamThem;
public:
    KySu();
    KySu(string maNhanVien, string hoTen, double luong, double soGioLamThem);

    double tienGioLamThem();

    void Nhap();
    void Xuat();
};
