#include "phone.hpp"

using namespace std;

int main() {
    vector<Phone> phones = {
        {"iPhone 15",         2023, 6,  128, 999.0},
        {"Samsung Galaxy S23",2023, 8,  256, 849.0},
        {"Google Pixel 8",    2023, 8,  128, 699.0},
        {"Xiaomi 13",         2022, 12, 256, 599.0},
        {"OnePlus 11",        2023, 16, 256, 649.0},
        {"Samsung Galaxy A54",2022, 6,  128, 449.0},
        {"iPhone 14",         2022, 6,  256, 799.0},
    };

    cout << "All phones:" << endl;
    for (auto& p : phones)
        printPhone(p);

    double total = accumulate(phones.begin(), phones.end(), 0.0,
        [](double sum, const Phone& p) { return sum + p.price; });
    double avgPrice = total / phones.size();
    cout << endl << "Average price: $" << avgPrice << endl;

    auto maxStorage = max_element(phones.begin(), phones.end(),
        [](const Phone& a, const Phone& b) { return a.storage < b.storage; });
    int maxStorageVal = maxStorage->storage;
    cout << endl << "Max storage (" << maxStorageVal << "GB):" << endl;
    for_each(phones.begin(), phones.end(), [maxStorageVal](const Phone& p) {
        if (p.storage == maxStorageVal)
            cout << p.model << endl;
    });

    double minPrice = 600.0, maxPrice = 850.0;
    cout << endl << "Phones in range $" << minPrice << " - $" << maxPrice << ":" << endl;
    for_each(phones.begin(), phones.end(), [&](const Phone& p) {
        if (p.price >= minPrice && p.price <= maxPrice)
            cout << p.model << " $" << p.price << endl;
    });

    vector<int> years;
    for (auto& p : phones)
        years.push_back(p.year);
    sort(years.begin(), years.end());
    years.erase(unique(years.begin(), years.end()), years.end());
    cout << endl << "Phones released by year:" << endl;
    for (int year : years) {
        int count = count_if(phones.begin(), phones.end(),
            [year](const Phone& p) { return p.year == year; });
        cout << year << ": " << count << " models" << endl;
    }

    return 0;
}