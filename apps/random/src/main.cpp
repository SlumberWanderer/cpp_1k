#include "students.hpp"

int main() {
    mt19937 gen(random_device{}());
    uniform_int_distribution<int> arrDist(0, 99);
    uniform_int_distribution<int> ageDist(17, 23);
    uniform_int_distribution<int> gradeDist(0, 100);
    uniform_int_distribution<int> attendDist(0, 100);

    const int SIZE = 5;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
        arr[i] = arrDist(gen);

    cout << "Random array" << endl;
    for (int i = 0; i < SIZE; i++)
        cout << "arr[" << i << "] = " << arr[i] << endl;

    const int COUNT = 3;
    student students[COUNT];

    for (int i = 0; i < COUNT; i++) {
        students[i].id         = i + 1;
        students[i].age        = ageDist(gen);
        students[i].grade      = gradeDist(gen);
        students[i].attendance = attendDist(gen);
    }

    cout << endl;
    cout << "Random structs" << endl;
    for (int i = 0; i < COUNT; i++)
        cout << students[i] << endl;

    return 0;
}
