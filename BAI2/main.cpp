#include "BAI2.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    Deluxe a(3, 50000, 20000); // (So dem, phi dich vu, phi phuc vu)
    Business b(10); // (So dem)
    Premium c(4, 60000); // (So dem, phi dich vu)
    Premium d(2, 30000); // (So dem, phi dich vu)
    Business e(7); // (So dem)

    vector<Deluxe> deluxeRooms = { a, };
    vector<Premium> premiumRooms = { c, d };
    vector<Business> businessRooms = { b, e };

    double totalDeluxe = 0, totalPremium = 0, totalBusiness = 0;

    for (const Deluxe& room : deluxeRooms) {
        totalDeluxe += room.doanhThu();
    }

    for (const Premium& room : premiumRooms) {
        totalPremium += room.doanhThu();
    }

    for (const Business& room : businessRooms) {
        totalBusiness += room.doanhThu();
    }

    double maxRevenue = max({ totalDeluxe, totalPremium, totalBusiness });
    vector<string>bestRoomType;

    if (maxRevenue == totalDeluxe) bestRoomType.push_back("Deluxe");
    if (maxRevenue == totalPremium) bestRoomType.push_back("Premium");
    if (maxRevenue == totalBusiness) bestRoomType.push_back("Business");

    cout << "Doanh thu tong cong:\n";
    cout << "Deluxe: " << fixed << setprecision(4) << totalDeluxe << " VND\n";
    cout << "Premium: " << fixed << setprecision(4) << totalPremium << " VND\n";
    cout << "Business: " << fixed << setprecision(4) << totalBusiness << " VND\n";

    cout << "Doanh thu cao nhat la : " << fixed << setprecision(4) << maxRevenue << " VND\n";
    cout << "\nLoai phong co doanh thu cao nhat: ";
    for (auto i : bestRoomType) {
        cout << i << " ";
    }
    cout << '\n';
    return 0;
}
