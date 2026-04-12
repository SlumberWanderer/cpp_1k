#include "matrix.hpp"

int main() {
    vector<matrix*> matrices;
    matrices.push_back(new LowerTriangular(3));
    matrices.push_back(new UpperTriangular(3));
    matrices.push_back(new DiagonalMatrix(3));
    matrices.push_back(new SymmetricMatrix(3));

    string names[] = {
        "LowerTriangular:",
        "UpperTriangular:",
        "DiagonalMatrix:",
        "SymmetricMatrix:"
    };

    int id = 0;
    for(auto m : matrices) {
        cout << names[id++] << endl;
        if (m->set(0, 1, 2)) {
            m->print();
        }
        cout << endl;
    }

    for (auto m : matrices) delete m;
    return 0;
}