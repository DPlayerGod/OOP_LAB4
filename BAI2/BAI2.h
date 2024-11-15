#pragma once
#include <iostream>
using namespace std;

class Room {
protected:
    int soDem;
public:
    Room(int soDem = 0);
    double doanhThu() const;
};

class Deluxe : public Room {
private:
    double phiDichVu;
    double phiPhucVu;
public:
    Deluxe(int soDem, double phiDichVu, double phiPhucVu);
    double doanhThu() const;
};

class Premium : public Room {
private:
    double phiDichVu;
public:
    Premium(int soDem, double phiDichVu);
    double doanhThu() const;
};

class Business : public Room {
public:
    Business(int soDem);
    double doanhThu() const;
};
