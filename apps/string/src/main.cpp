#include <iostream>
#include "distro.hpp"
using namespace std;

int main()
{
    distro linux_distros[5] = {
        {"Ubuntu",     "Debian",      "20.10.2004", 94000},
        {"Arch Linux", "Independent", "11.03.2002", 15000},
        {"Fedora",     "Red Hat",     "06.11.2003", 80000},
        {"Mint",       "Ubuntu",      "27.08.2006", 94000},
        {"Manjaro",    "Arch Linux",  "10.07.2011", 15000}
    };

    for (int i = 0; i < 5; i++)
        cout << linux_distros[i] << endl;

    return 0;
}