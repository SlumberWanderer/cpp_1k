#include "zip.hpp"

using namespace std;

int main() {
    ZipCountry ukraine("Ukraine", "\\d{5}", 5);

    cout << "Country: " << ukraine.country_name() << endl;
    cout << "Pattern: " << ukraine.pattern1() << endl;
    cout << "Length:  " << ukraine.length1() << endl;
    cout << endl;

    string zip;
    cout << "Enter ZIP code: ";
    cin >> zip;

    if (ukraine.validate(zip))
        cout << zip << " -> valid" << endl;
    else
        cout << zip << " -> invalid" << endl;

    return 0;
}