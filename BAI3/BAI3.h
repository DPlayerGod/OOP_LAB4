#pragma once

#include <iostream>
#include <vector>

using namespace std;

// Lop GiaSuc la lop co so cho cac loai gia suc
class GiaSuc {
public:
    int soLuongCon; // So luong con cua gia suc
    
    // Ham khoi tao
    GiaSuc(int soLuongCon) : soLuongCon(soLuongCon) {}

    // Phuong thuc cho sua, moi loai gia suc tu quyet dinh
    int choSua();

    // Phuong thuc sinh con, moi loai gia suc tu quyet dinh
    int sinhCon();

    // Phuong thuc keu, moi loai gia suc tu quyet dinh
    void keu();
};

// Lop Bo ke thua tu GiaSuc
class Bo : public GiaSuc {
public:
    Bo(int soLuongCon) : GiaSuc(soLuongCon) {}

    int choSua();  // Phuong thuc cho sua cho Bo
    int sinhCon(); // Phuong thuc sinh con cho Bo
    void keu();    // Phuong thuc keu cho Bo
};

// Lop Cuu ke thua tu GiaSuc
class Cuu : public GiaSuc {
public:
    Cuu(int soLuongCon) : GiaSuc(soLuongCon) {}

    int choSua();  // Phuong thuc cho sua cho Cuu
    int sinhCon(); // Phuong thuc sinh con cho Cuu
    void keu();    // Phuong thuc keu cho Cuu
};

// Lop De ke thua tu GiaSuc
class De : public GiaSuc {
public:
    De(int soLuongCon) : GiaSuc(soLuongCon) {}

    int choSua();  // Phuong thuc cho sua cho De
    int sinhCon(); // Phuong thuc sinh con cho De
    void keu();    // Phuong thuc keu cho De
};

// Lop NongTrai quan ly tat ca gia suc
class NongTrai {
private:
    vector<Bo> bo;   // Danh sach bo trong nong trai
    vector<Cuu> cuu; // Danh sach cuu trong nong trai
    vector<De> de;   // Danh sach de trong nong trai

public:
    // Ham khoi tao, nhan so luong gia suc cua moi loai
    NongTrai(int soLuongBo, int soLuongCuu, int soLuongDe);

    // Phuong thuc liet ke tieng keu cua toan bo gia suc
    void keuToanTrai();

    // Phuong thuc thong ke so luong gia suc va tong so sua
    void thongKe();
};
