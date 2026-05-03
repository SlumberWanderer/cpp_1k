#include "app.hpp"
using std::cout;
using std::endl;

int main() {
    Person student("Maksim", 72);

    cout << "Initial state:" << endl;
    cout << student << endl;

    cout << "Changing activity level:" << endl;
    student.setActivityLevel(115);

    cout << student << endl;

    return 0;
}