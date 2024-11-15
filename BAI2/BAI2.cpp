#include "BAI2.h"

Room::Room(int soDem) : soDem(soDem) {}

Deluxe::Deluxe(int soDem, double phiDichVu, double phiPhucVu)
    : Room(soDem), phiDichVu(phiDichVu), phiPhucVu(phiPhucVu) {}

double Deluxe::doanhThu() const {
    return soDem * 750000 + phiDichVu + phiPhucVu;
}

Premium::Premium(int soDem, double phiDichVu)
    : Room(soDem), phiDichVu(phiDichVu) {}

double Premium::doanhThu() const {
    return soDem * 500000 + phiDichVu;
}

Business::Business(int soDem) : Room(soDem) {}

double Business::doanhThu() const {
    return soDem * 300000;
}