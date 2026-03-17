#include "student.hpp"

using namespace std;

int main() {
    const int SIZE = 5;

    Student students[SIZE] = {
        {"Bogdan",  18, 4.5},
        {"Leva",     19, 3.8},
        {"Artem",    18, 4.9},
        {"Maksim",   18, 4.1},
        {"Roma",   18, 3.6}
    };

    cout << "List of students:" << endl;
    printAllStudents(students, SIZE);

    Student& best = findBestStudent(students, SIZE);

    cout << endl << "Best student:" << endl;
    printStudent(best);

    return 0;
}